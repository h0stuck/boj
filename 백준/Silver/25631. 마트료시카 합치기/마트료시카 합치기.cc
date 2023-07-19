#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

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

    int r = 1, k = 1;
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            k++;
            if(k > r){
                r = k;
            }
        }
        else{
            k = 1;
        }
    }

    cout << r;
    return 0;
}