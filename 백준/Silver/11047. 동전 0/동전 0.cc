#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

stack<int> st;

int main(){
    fast_io;
    int n, k, ans = 0;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        st.push(a);
    }

    for(int i=0; i<n; i++){
        if(st.top() <= k){
            ans += (k / st.top());
            k -= st.top() * (k / st.top());
        }
        st.pop();
    }

    cout << ans;

}