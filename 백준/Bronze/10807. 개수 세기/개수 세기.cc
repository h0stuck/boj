#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    int n;
    cin >> n;
    
    vector<int> v(n, 0);
    for(int i=0; i<n; i++) cin >> v[i];

    int k, r=0;
    cin >> k;

    for(int i=0; i<n; i++){
        if(v[i] == k) r++;
    }

    cout << r << endl;

    return 0;
}