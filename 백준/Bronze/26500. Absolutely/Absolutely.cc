#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    cout << fixed;
    cout << setprecision(1);

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        double a, b;
        cin >> a >> b;
        cout << abs(a-b) << endl;
    }
    
    return 0;
}
