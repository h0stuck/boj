#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void merge(int a, int b);
int find(int n);

int par[1000005];
int n, m;

int main(){
    fast_io;
    
    cin >> n >> m ;

    memset(par, -1, sizeof(int) * (n+1));
    for(int i=0; i<m; i++){
        int k, a, b;
        cin >> k >> a >> b;
        if(k == 0) merge(a, b);
        else{
            if(find(a) == find(b)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    return 0;

}

int find(int n){
    if(par[n] == -1) return n;
    return par[n] = find(par[n]);
}

void merge(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;
    else par[a] = b;

    return;
}