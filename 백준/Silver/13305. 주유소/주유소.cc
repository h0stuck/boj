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

    vector<ll> city(n, 0);
    vector<ll> road(n, 0);

    for(int i=0; i<n-1; i++){
        cin >> road[i];
    }
    for(int i=0; i<n; i++){
        cin >> city[i];
    }

    ll curCost = city[0];
    ll curDis = 0;
    ll result = 0;
    for(int i=0; i<n; i++){
        if(curCost > city[i] || i == n-1){
            result += curCost * curDis;
            curCost = city[i];
            curDis = 0;
        }
        curDis += road[i];
    }

    cout << result << endl;

    return 0;
}