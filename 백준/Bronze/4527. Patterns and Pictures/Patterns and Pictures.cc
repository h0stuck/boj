#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();

int main(){
    fast_io;

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}

void solve(){
    int n;
    cin >> n;

    long long set = 0;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        set += a * b;
    }

    cout << 1296 / set << " " << 2592 / set << " " << 3888 / set << endl;
    
    return;
}