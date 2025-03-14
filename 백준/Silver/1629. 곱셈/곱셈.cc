#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long int;

ll solve(ll a, ll b, ll c);

int main(){
    fast_io;

    ll a, b, c;
    cin >> a >> b >> c;

    cout << solve(a, b, c) << endl;
}

ll solve(ll a, ll b, ll c){
    if(b == 0) return 1;

    ll x = solve(a, b / 2, c);
    x = (x * x) % c;

    if(b % 2 == 1) x = (x * a) % c;

    return x;
}
