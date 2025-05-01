#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

void solve();

int main(){
    fast_io;
    
    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}

void solve(){
    int p, q, a, b, c, d, coin = 0;
    cin >> p >> q >> a >> b >> c >> d;
    coin += (q / c) * d;
    
    
    if(p > coin){
       int t = (p - coin) / (a + b);
       p -= a * t;
       coin += b * t;
       if(min(p - a, coin + b) > min(p, coin)){
            p -= a;
            coin += b;
       }
    }
    else if(coin > p){
        int t = (coin - p) / (a + b);
        coin -= b * t;
        p += a * t;
        if(min(p + a, coin - b) > min(p, coin)){
            p += a;
            coin -= b;
        }
    }

    cout << ((p < coin) ? p : coin) << endl;
}