#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

vector<pair<int, int>> v[1005];
vector<int> result;
bool visited[1005];
int want;

void dfs(int n, int r);

int main(){
    fast_io;

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n-1; i++){
        int x, y, z;
        cin >> x >> y >> z;
        v[x].push_back({y, z});
        v[y].push_back({x, z});
    }

    for(int i=0; i<m; i++){
        int a;
        cin >> a >> want;
        for(int i=1; i<=n; i++) { visited[i] = false; }
        dfs(a, 0);
    }

    for(int i=0; i<m; i++){
        cout << result[i] << endl;
    }

    return 0;
}

void dfs(int n, int r){
    visited[n] = true;
    if(n == want){
        result.push_back(r);
        return;
    }
    for(auto u : v[n]) {
        int x = u.first;
        int w = u.second;
        if (!visited[x]) { dfs(x, r + w); }
    }
}
