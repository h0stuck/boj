#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    ll apt[15][15] = {0, };
    for(int i=1; i<15; i++){
        apt[0][i] = apt[0][i-1] + i;
    }
    for(int i=1; i<15; i++){
        for(int j=1; j<15; j++){
            apt[i][j] = apt[i-1][j] + apt[i][j-1];
        }
    }

    int t;
    cin >> t;

    while(t--){
        int k, n;
        cin >> k >> n;
        cout << apt[k][n] - apt[k][n-1] << endl;
    }

    return 0;
}