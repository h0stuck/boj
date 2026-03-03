#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    
    stack<int> st;
    queue<int> q, sq;
    int n, push_count = 0, pop_count = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sq.push(a);
    }

    while(pop_count < n){
        if(st.empty() || st.top() < sq.front()){
            st.push(++push_count);
            q.push(1);
        }
        else if(st.top() == sq.front()){
            st.pop();
            q.push(0);
            pop_count++;
            sq.pop();
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }

    while(!q.empty()){
        if(q.front()){
            cout << "+" << endl; q.pop();
        }
        else{
            cout << "-" << endl; q.pop();
        }
    }
    return 0;

}