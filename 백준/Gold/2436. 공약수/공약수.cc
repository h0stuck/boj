#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    fast_io;

    ll x, y, a, b;
    cin >> x >> y;
    a = x; b = y;

    for(ll i=y/2; i>0; i--){
        if(y % i == 0){
            int p = x * i;
            int q = y / i;
            if(p + q < a + b && gcd(p, q) == x){
                a = p;
                b = q;
            }
        }
    }

    cout << ((a < b) ? a : b) << " ";
    cout << ((a > b) ? a : b) << endl;

    return 0;

}