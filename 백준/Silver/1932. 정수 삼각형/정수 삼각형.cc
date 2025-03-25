#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    int n, result = 0;
    cin >> n;

    vector<int> v(150000, 0);
    vector<int> r(150000, 0);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int a;
            cin >> a;
            v[i * (i + 1) / 2 + j] = a;
            if(i > 0){
                int x = 0, y = 0;
                if(j < i) x = r[i * (i - 1) / 2 + j];
                if(j > 0) y = r[i * (i - 1) / 2 + j - 1];
                r[i * (i + 1) / 2 + j] = max(x, y) + a;
                result = max(result, r[i * (i + 1) / 2 + j]);
            }
            else{
                r[0] = a;
                result = a;
            }
        }
    }

    cout << result << endl;

    return 0;

}
