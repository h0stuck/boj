#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

bool comp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}

int main(){
    fast_io;

    int num = 123456*2;
    vector<bool> v(num + 1, true);

    for (int i = 2; i * i <= num; i++) {
        if (v[i]) {
            for (int k = i * i; k <= num; k += i) {
                v[k] = false;
            }
        }
    }

    while(1){
        int n, a = 0;
        cin >> n;
        if(!n) break;

        for(int i=n+1; i<=2*n; i++){
            a += (v[i]) ? 1 : 0;
        }
        cout << a << endl;
    }

    return 0;
}