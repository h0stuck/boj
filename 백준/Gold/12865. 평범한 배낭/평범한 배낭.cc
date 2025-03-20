#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    int n, k, v, w, result = 0;
    cin >> n >> k;

    vector<vector<ll>> dp(n + 1, vector<ll>(k + 1, 0));

    for(int i=1; i<=n; i++){
        cin >> w >> v;
        for(int j=0; j<=k; j++){
            dp[i][j] = dp[i-1][j];
            if(j >= w){
                dp[i][j] = max(dp[i][j], dp[i-1][j-w] + v);
            }
            if(dp[i][j] > result) result = dp[i][j];
        }
    }
    
    cout << result << endl;;

    return 0;

}