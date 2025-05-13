#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

void solve();

int main(){
    fast_io;

    int p;
    cin >> p;

    while(p--) solve();

    return 0;
}

void solve(){
    int arr1[16] = {0, }, arr2[64];
    for(int i=0; i<40; i++){
        char c;
        cin >> c;
        if(c == 'T') arr2[i] = 0;
        else arr2[i] = 1;
    }

    for(int i=0; i<38; i++){
        arr1[arr2[i]*4 + arr2[i+1]*2 + arr2[i+2]*1]++;
    }

    for(int i=0; i<8; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    return;
}