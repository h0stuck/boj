#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    string l, r;
    cin >> l >> r;
    int result = 0, len = l.size();

    if(len < r.size()) { cout << "0"; return 0;}

    for(int i=0; i<len; i++){
        if(l[i] == r[r.size()-len+i]){
            if(l[i] == '8'){
                result++;
            }
        }
        else{
            break;
        }
    }

    cout << result << endl;

}