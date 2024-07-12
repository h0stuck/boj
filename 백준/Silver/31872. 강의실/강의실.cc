#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    ll n, k, r=0;
    vector<ll> v, v2;

    cin >> n >> k;
    v.push_back(0);
    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=1; i<=n; i++){
        v2.push_back(v[i] - v[i-1]);
    }

    sort(v2.begin(), v2.end(), greater<>());
    for(int i=k; i<n; i++){
        r += v2[i];
    }

    cout << r;
    
    return 0;
}
