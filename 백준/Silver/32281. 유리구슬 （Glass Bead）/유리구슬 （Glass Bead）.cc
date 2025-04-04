#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;


int main(){
    fast_io;

    int n;
    cin >> n;
    string s;
    cin >> s;

    long long r = 0, l = 0;
    for(int i=0; i<n; i++){
        if(s[i] == '1'){ l++; r++; }
        else if(s[i] == '0'){
            r += l * (l-1) / 2;
            l = 0;
        }
    }
    r += l * (l-1) / 2;

    cout << r << endl;

    return 0;

}
