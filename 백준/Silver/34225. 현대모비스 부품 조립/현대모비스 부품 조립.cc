#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v[i].first = a;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end(), comp);

    ll ans = 1, sumv = v[0].first * 3, maxv = sumv;
    for(int i=1; i<n; i++){
        sumv += v[i].first * 2 - v[i-1].first;
        if(sumv > maxv){
            maxv = sumv;
            ans = i+1;
        }
    }

    cout << ans << endl;;
    for(int j=0; j<ans; j++){
        cout << v[j].second << " ";
    }

    return 0;
}