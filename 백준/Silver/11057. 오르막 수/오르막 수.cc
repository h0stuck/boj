#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, r = 0;;
    cin >> n;

    vector<vector<int>> v(10, vector<int>(n, 0));
    for(int i=0; i<10; i++) v[i][0] = 1;

    for(int i=1; i<n; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<=j; k++){
                v[j][i] = (v[j][i] + v[k][i-1]) % 10007;
            }
        }
    }

    for(int i=0; i<10; i++){
        r += v[i][n-1];
    }
    
    cout << r % 10007 << endl;

    return 0;
}
