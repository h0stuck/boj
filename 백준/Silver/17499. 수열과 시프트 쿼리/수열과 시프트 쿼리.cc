#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    int n, k, start = 0;
    cin >> n >> k;

    vector<int> v(n, 0);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    for(int i=0; i<k; i++){
        int x;
        cin >> x;
        if(x == 1){
            int a, b;
            cin >> a >> b;
            v[(start+a-1+n)%n] += b;
        }
        else if(x == 2){
            int a;
            cin >> a;
            start = (start - a+n) % n;
        }
        else{
            int a;
            cin >> a;
            start = (start + a+n) % n;
        }
    }

    for(int i=0; i<n; i++){
        cout << v[(i+start+n)%n] << " ";
    }
    

    return 0;
}