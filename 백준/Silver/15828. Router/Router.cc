#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

queue<int> q;

int main(){
    fast_io;
    
    int n;
    cin >> n;

    while(1){
        int a;
        cin >> a;
        if(a == -1) break;
        else if(a == 0) q.pop();
        else if(q.size() < n) q.push(a);
    }

    if(q.empty()) cout << "empty";
    else{
        int m = q.size();
        for(int i=0; i<m; i++){
            cout << q.front() << " ";
            q.pop();
        }
    }
    
}