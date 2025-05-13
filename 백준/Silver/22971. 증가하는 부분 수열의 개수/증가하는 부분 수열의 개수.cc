#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

void solve();

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<ll> v1(n, 0);
    vector<ll> v2(n, 1);

    for(int i=0; i<n; i++){
        cin >> v1[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if(v1[i] > v1[j]) v2[i] += v2[j];
            v2[i] %= 998244353;
        }
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}