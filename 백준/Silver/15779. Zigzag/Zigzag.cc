#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    bool up=true;
    int count=1, seq=1, n, a, b, r=0;
    cin >> n;
    cin >> a;
    for(int i=0; i<n-1; i++){
        cin >> b;
        count++;
        if(b < a && up){
            up = false;
            seq = 2;
        }
        else if(b > a && !up){
            up = true;
            seq = 2;
        }
        else{
            if(seq >= 2){
                count = 2;
            }
            seq++;
        }
        a = b;

        if(r < count) r = count;
    }

    cout << r;

    return 0;
}
