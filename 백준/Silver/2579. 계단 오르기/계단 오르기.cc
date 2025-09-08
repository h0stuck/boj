#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define newInt(K) int K; cin >> K

using namespace std;

vector<int> v;
int dp[305] = {0 };
int n;

int func();

int main(){
    fast_io;

    cin >> n;

    for(int i=0; i<n; i++){
        newInt(x);
        v.push_back(x);
    }
    cout << func();
}

int func(){
    dp[0] = v[0];
    dp[1] = v[1] + v[0];
    dp[2] = max(v[0] + v[2], v[1] + v[2]);
    for(int i=3; i<n; i++){
        dp[i] = max(dp[i-3] + v[i-1], dp[i-2]) + v[i];
    }
    return dp[n-1];
}