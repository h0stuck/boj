#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int gcd(int a, int b){
    if(b == 0) return a;
    else return gcd(b, a % b);
}

int main(){
    fast_io;
    
    int n, x;
    cin >> n;

    double r = 0, k = 0;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> x;
    for(auto a: v){
        if(a != 1 && gcd(x, a) == 1){
            r += a;
            k++;
        }
    }

    cout << r / k << endl;


    return 0;
}

