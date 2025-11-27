#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, k;
    vector<int> v;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>());

    int result = 0;
    for(int i=0; i<k; i++){
        result += v[i] - i;
    }

    cout << result << endl;

    return 0;

}