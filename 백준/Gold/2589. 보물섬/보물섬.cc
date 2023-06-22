#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n, m;
bool field[51][51];
int visited[51][51];

vector<pair<int, int>> v;
int ans = 0;

int dy[] = {-1, 0, 1, 0};
int dx[] = {0, 1, 0, -1};

void bfs(int sx, int sy);

int main(){
    fast_io;

    cin >> n >> m;
    for(int i=0; i < n; i++)
    {
        string str;
        cin >> str;
        for(int j=0; j < m; j++)
        {
            field[i][j] = str[j] == 'W' ? 1 : 0;
            if(!field[i][j])
                v.push_back({j, i});
        }
    }

    for(auto &el : v)
    {
        bfs(el.first, el.second);
        fill(&visited[0][0], &visited[n][m], 0);
    }
    cout << ans-1 << endl;
    return 0;
}

void bfs(int sx, int sy){
    int cnt = 0;
    queue<pair<int, int>> q;
    q.push({sy, sx});
    visited[sy][sx] = 1;
    while(q.size())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for(int i=0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if(ny < 0 || ny >= n || nx < 0 || nx >= m)
                continue;
            if(!visited[ny][nx] && !field[ny][nx])
            {
                visited[ny][nx] = visited[y][x] + 1;
                ans = max(visited[ny][nx], ans);
                q.push({ny, nx});
            }
        }
    }
}