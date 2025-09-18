#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    ll r = 0, s = 0;
    for(int i=0; i<n; i++){
        s += v[i];
        r += s;
    }

    cout << r << endl;

    return 0;
}