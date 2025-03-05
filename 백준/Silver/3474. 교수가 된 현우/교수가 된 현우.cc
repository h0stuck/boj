#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ull = unsigned long long;

void solve() {
    ull n, k = 5;
    cin >> n;

    int r = 0;
    while(n >= k){
        r += (int)(n / k);
        k = k * 5;
    }
    
    cout << r << endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
