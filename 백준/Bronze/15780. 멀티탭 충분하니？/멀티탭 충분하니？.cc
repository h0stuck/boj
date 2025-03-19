#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();

int main(){
    fast_io;

    int n, k, r = 0;
    cin >> n >> k;

    for(int i=0; i<k; i++){
        int a;
        cin >> a;
        r += (a - (a/2));
    }

    cout << ((r >= n) ? "YES" : "NO") << endl;

    return 0;
}
