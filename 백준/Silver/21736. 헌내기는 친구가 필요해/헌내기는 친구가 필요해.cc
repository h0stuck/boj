#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

char camp[1000][1000];
bool visited[1000][1000];
int n, m, tx, ty, result =  0;

void dfs(int x, int y);

int main(){
    fast_io;
    
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin >> c;
            camp[i][j] = c;
            if(c == 'I') { tx = i; ty = j; }
            visited[i][j] = false;
        }
    }

    dfs(tx, ty);

    if(result == 0) cout << "TT" << endl;
    else cout << result << endl;

    return 0;
}

void dfs(int x, int y){
    visited[x][y] = true;
    if(camp[x][y] == 'P') result++;

    int p[4] = {1, -1, 0, 0};
    for(int i=0; i<4; i++){
        int nx = x+p[i], ny = y+p[3-i];
        if(nx >= 0 && nx < n && ny >= 0 && ny < m){
            if(!visited[nx][ny] && camp[nx][ny] != 'X') dfs(nx, ny);
        }
    }
}