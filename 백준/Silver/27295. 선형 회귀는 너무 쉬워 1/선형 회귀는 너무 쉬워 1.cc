#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

ll gcd(ll n, ll m);

int main(){
    fast_io;

    ll a = 0, b = 0, c, n;
    cin >> n >> c;

    for(int i=0; i<n; i++){
        ll _a, _b;
        cin >> _a >> _b;
        a += _a;
        b += c - _b;
    }

    if(a == 0){
        cout << "EZPZ" << endl;
        return 0;
    }

    ll k = gcd(abs(a), abs(b));
    a /= k;
    b /= k;
    assert(a != 0);
    if(a == 1){
        cout << -b << endl;
    }
    else if(a == -1){
        cout << b << endl;
    }
    else if((a ^ b) > 0){
        cout << '-' << abs(b) << '/' << abs(a) << endl;
    }
    else if((a ^ b) < 0){
        cout << abs(b) << '/' << abs(a) << endl;
    }

    return 0;
}

ll gcd(ll n, ll m) {
	return m ? gcd(m, n % m) : n;
}
