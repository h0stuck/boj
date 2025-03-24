#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

void solve();

int main(){
    fast_io;

    ll t;
    cin >> t;

    while(t--) solve();

    return 0;

}

void solve(){
    ll n;
    cin >> n;

    vector<ll> buy(n, 0);
    vector<ll> sell(n, 0);

    for(int i=0; i<n; i++){
        cin >> buy[i];
    }

    ll m = 0;
    for(int i=n-1; i>=0; i--){
        if(buy[i] > m){
            m = buy[i];
        }
        sell[i] = m;
    }

    ll r = 0;
    for(int i=0; i<n; i++){
        r += sell[i] - buy[i];
    }

    cout << r << endl;

    return;
}