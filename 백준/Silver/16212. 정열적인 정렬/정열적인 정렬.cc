#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n;
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }

    return 0;
}
