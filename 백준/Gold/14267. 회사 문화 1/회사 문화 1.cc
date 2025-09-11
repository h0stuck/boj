#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

vector<int> tree[200005];
int d[200005] = {0, };
bool visited[200005] = {false, };

void dfs(int x, int k);

int main(){
    fast_io;

    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        if(i > 1) tree[a].push_back(i);
        visited[i] = false;
    }

    for(int i=0; i<m; i++){
        int v, w;
        cin >> v >> w;
        d[v] += w;
    }

    dfs(1, 0);

    for(int i=1; i<=n; i++){
        cout << d[i] << " ";
    }

    return 0;
}

void dfs(int x, int k){
    visited[x] = true;

    d[x] += k;
    for(int i=0; i<tree[x].size(); i++){
        int y = tree[x][i];
        if(!visited[y]){
            dfs(y, d[x]);
        }
    }

    return;
}