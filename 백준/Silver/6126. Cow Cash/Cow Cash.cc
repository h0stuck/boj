#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    ll v, n, dp[100005] = {0, };
    cin >> v >> n;

    vector<ll> num;
    for(ll i=0; i<v; i++){
        ll a;
        cin >> a;
        num.push_back(a);
    }

    dp[0] = 1;
    for(ll i=0; i<num.size(); i++){
        for(ll j=num[i]; j<=n; j++){
            dp[j] += dp[j-num[i]];
        }
    }

    cout << dp[n] << endl;

    return 0;
}