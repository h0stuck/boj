#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    
    int n, all = 2097151, bSet = 0;
    cin >> n;

    while(n--){
        string s;
        int t;
        cin >> s;
        if(s != "all" && s != "empty"){
            cin >> t;
            int x = (1 << t);

            if(s == "add") bSet = (bSet | x);
            else if(s == "remove") bSet = (bSet & (~x));
            else if(s == "check"){
                if((bSet & x) == x) cout << 1 << endl;
                else cout << 0 << endl;
            }
            else{
                bSet ^= x;
            }
        }
        else if(s == "all"){
            bSet = all;
        }
        else{
            bSet = 0;
        }
    }

    return 0;
}

