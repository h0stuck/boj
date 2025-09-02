#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    int n, k;
    cin >> n >> k;

    vector<int> cats;
    for(int i=0; i<n; i++){
        int w;
        cin >> w;
        cats.push_back(w);
    }

    sort(cats.begin(), cats.end());

    int p = 0, q = n-1, ans = 0;
    while(p < q){
        if(cats[p] + cats[q] <= k){
            ans++;
            p++;
            q--;
        }
        else{
            q--;
        }
    }

    cout << ans << endl;

    return 0;
}