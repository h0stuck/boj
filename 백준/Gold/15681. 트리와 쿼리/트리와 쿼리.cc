#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

vector<int> tree[200005];
int d[200005];
bool visited[200005] = {false, };

void dfs(int x);

int main(){
    fast_io;

    int n, r, q;
    cin >> n >> r >> q;

    for(int i=0; i<n-1; i++){
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);

        d[i+1] = 1;
        visited[i+1] = false;
    }
    d[n] = 1;
    visited[n] = false;

    dfs(r);
    
    for(int i=0; i<q; i++){
        int k;
        cin >> k;
        cout << d[k] << endl;
    }

    return 0;
}

void dfs(int x){
    visited[x] = true;

    for(int i=0; i<tree[x].size(); i++){
        int y = tree[x][i];
        if(!visited[y]){
            dfs(y);
            d[x] += d[y];
        }
    }

    return;
}