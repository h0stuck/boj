#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, r=1;
    cin >> n;

    while(n > 1){
        if(n % 2 == 1) r++;
        n /= 2;
    }

    cout << r << endl;

    return 0;

}