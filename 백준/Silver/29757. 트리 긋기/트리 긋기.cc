#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.second.first == b.second.first) return a.second.second > b.second.second;
    else return a.second.first < b.second.first;
}

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<pair<int, pair<int, int>>> v(n, make_pair(0, make_pair(0, 0)));
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        v[i] = make_pair(i+1, make_pair(x, y));
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<n-1; i++){
        cout << v[i].first << " " << v[i+1].first << endl;;
    }

    return 0;
}