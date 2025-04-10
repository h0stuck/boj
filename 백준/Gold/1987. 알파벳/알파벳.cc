#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int R, C, result = 1;
bool visited[50] = { true, };
vector<vector<int>> v(20, vector<int>(20, 0));

void bt(int x, int y, int d);

int main(){
    fast_io;

    cin >> R >> C;
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            char c;
            cin >> c;
            v[i][j] = (int)c - 65;
            visited[v[i][j]] = false;
        }
    }
    
    visited[v[0][0]] = true;
    bt(0, 0, 1);

    cout << result << endl;

    return 0;
}

void bt(int x, int y, int d){
    if(d > result) result = d;

    int m[5] = {0, 0, 1, -1};
    for(int i=0; i<4; i++){
        int cx = x + m[i], cy = y + m[3-i];
        if(cx >= 0 && cx < C && cy >= 0 && cy < R){
            if(!visited[v[cy][cx]]){
                visited[v[cy][cx]] = true;
                bt(cx, cy, d+1);
                visited[v[cy][cx]] = false;
            }
        }
    }

    return;
}