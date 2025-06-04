#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, m;
    cin >> n >> m;

    if(n % 2 == 0 || m % 2 == 0) cout << 'A' << endl;
    else cout << 'B' << endl;
    

    return 0;
}