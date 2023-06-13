#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void merge(int a, int b);
int find(int n);

int par[10005];
int money[10005];
int n, m;

int main(){
    fast_io;
    
    cin >> n >> m ;

    memset(par, -1, sizeof(int) * (n+1));
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int a;
            cin >> a;
            if(a == 1) merge(i, j);
        }
    }

    vector<int> v;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        if(i > 0){
            if(find(x) != find(v[i-1])){
                cout << "NO";
                return 0;
            }
        }
        v.push_back(x);
    }
    cout << "YES";

    return 0;

}

int find(int n){
    if(par[n] == -1) return n;
    return find(par[n]);
}

void merge(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;
    if(money[a] < money[b]) par[b] = a;
    else par[a] = b;

    return;
}