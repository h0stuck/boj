#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void merge(int a, int b);
int find(int n);

int par[10005];
int money[10005];
int n, m, k;

int main(){
    fast_io;
    
    cin >> n >> m >> k;
    for(int i=1; i<=n; i++){
        cin >> money[i];
    }

    memset(par, -1, sizeof(int) * (n+1));
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        merge(x, y);
    }

    int result = 0;
    for(int i=1; i<=n; i++){
        if(par[i] == -1) result += money[i];
    }

    if(result > k) cout << "Oh no";
    else cout << result;

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