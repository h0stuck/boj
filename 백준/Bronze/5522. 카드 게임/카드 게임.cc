#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int r = 0;
    for(int i=0; i<5; i++){
        int a;
        cin >> a;
        r += a;
    }

    cout << r << endl;
    
    return 0;
}