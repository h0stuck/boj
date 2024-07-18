#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    int n;
    cin >> n;
    int a, b;
    cin >> a;
    for(int i=0; i<n-1; i++){
        cin >> b;
        if(b < a){
            cout << "no" << endl;
            return 0;
        }
        a = b;
    }
    
    cout << "yes" << endl;

    return 0;
}
