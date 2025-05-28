#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    int n, a, b, r;
    cin >> n;
    a = n;
    b = 1;

    for(int i=1; i<=n/2; i++){
        if(n % i == 0){
            if(n / i + i < a + b){
                a = i;
                b = n / i;
            }
        }
    }

    if(a < b){
        int t = a;
        a = b;
        b = t;
    }
    r = a + b;
    cout << r << endl;

    if(b == 1 || a == 1){
        for(int i=1; i<r; i++){
            cout << i << " " << i+1 << endl;
        }
    }
    else{
        for(int i=1; i<a; i++){
            cout << i << " " << i+1 << endl;
        }

        for(int i=1; i<=b; i++){
            cout << a-b+i << " " << a+i << endl;
        }
    }

    return 0;
}