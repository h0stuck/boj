#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int dp[1005] = {0, };

int main(){
    fast_io;
    
    int n;
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    for(int i=3; i<=n; i++){
        dp[i] = (dp[i-1]+ dp[i-2]*2) % 10007;
    }

    cout << dp[n];
    

    return 0;

}