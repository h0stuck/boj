#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long int;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    fast_io;

    ll n;
    cin >> n;

    vector<ll> v1(n), v2(n);
    for(int i = 0; i < n; i++){
        ll a, b;
        cin >> a >> b;

        int k = gcd(a, b);
        v1[i] = a / k;
        v2[i] = b / k;
    }

    ll lc = v2[0];
    for(ll i = 1; i < n; i++){
        lc = (lc * v2[i]) / gcd(lc, v2[i]);
    }

    ll num = v1[0] * (lc / v2[0]);
    for(ll i = 1; i < n; i++){
        num = gcd(num, v1[i] * (lc / v2[i]));
    }

    ll g = gcd(num, lc);
    cout << num / g << " " << lc / g << endl;

    return 0;
}
