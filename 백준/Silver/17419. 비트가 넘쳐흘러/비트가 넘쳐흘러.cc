#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, k=0;
    string s;

    cin >> n >> s;
    for(int i=0; i<n; i++){
        k += (s[n-i-1] - '0') * pow(2, i);
    }
    
    int i=0;
    while(k != 0){
        k = k-(k&((~k)+1));
        i++;
    }

    cout << i;

    return 0;

}