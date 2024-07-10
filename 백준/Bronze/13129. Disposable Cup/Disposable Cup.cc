#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int a, b, n;
    cin >> a >> b >> n;

    for(int i=1; i<=n; i++){
        cout << (b * i) + (a * n) << endl;
    }

    return 0;
}
