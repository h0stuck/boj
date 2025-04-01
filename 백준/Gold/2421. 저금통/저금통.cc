#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

vector<ll> p;

void primeSearch();
ll cal(ll a, ll b);

int main(){
    fast_io;

    for(int i=1; i<=1000000; i++){
        p.push_back(1);
    }
    primeSearch();

    int n;
    cin >> n;
    
    vector<vector<ll>> arr(1000, vector<ll>(1000, 0));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ll x = arr[i-1][j];
            ll y = arr[i][j-1];
            arr[i][j] = max(arr[i][j], max(x, y) + cal(i, j));
            
            x = arr[j-1][i];
            y = arr[j][i-1];
            arr[j][i] = max(arr[j][i], max(x, y) + cal(j, i));
        }
    }

    cout << arr[n][n] - 1 << endl;

    return 0;

}

ll cal(ll a, ll b){
    ll k = a * pow(10, (ll)log10(b)+1) + b;
    return p[k];
}

void primeSearch(){
    for (int i = 2; i * i <= 1000000; i++) {
        if (p[i]) {
            for (int k = i * i; k <= 1000000; k += i) {
                p[k] = 0;
            }
        }
    }
}