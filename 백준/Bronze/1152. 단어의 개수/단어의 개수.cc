#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    bool w = false;
    int ans = 0;
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' ' && !w){
            w = true;
            ans++;
        }
        else if(s[i] == ' ' && w){
            w = false;
        }
    }

    cout << ans;

}