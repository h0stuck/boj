#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <numeric>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n, m, a, b;
int dp[100005] = {0, };
vector<pair<int, int>> v;

int rec(int k);

int main(){
    fast_io;

    cin >> n >> m >> a >> b;

    for(int i=0; i<m; i++){
        int l, r;
        cin >> l >> r;
        v.push_back(make_pair(l, r));
    }

    cout << rec(0);

    return 0;
}

int rec(int k){
    if(k > n) { return -1; }
    if(dp[k] != 0) {
        if(dp[k] == -1) return -1;
        else return dp[k] + 1;
    }
    if(k == n) { return 0; }
    for(int i=0; i<m; i++){
        if(k >= v[i].first && k <= v[i].second) { return -1; }
    }
    int x = rec(k + a);
    int y = rec(k + b);
    if(x == -1 && y == -1) { dp[k] = -1; return -1; }
    if((x < y && x != -1) || y == -1) { dp[k] = x; return 1 + x; }
    else { dp[k] = y; return 1 + y; }
}