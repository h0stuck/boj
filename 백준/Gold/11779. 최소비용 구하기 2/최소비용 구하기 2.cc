#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MAX 100001

using namespace std;

int n, b;

bool visited[1001] = {false, };
int pre[1001] = {0, };
vector<int> dis(1001, 99999999);

vector<vector<int>> city(1001, vector<int>(1001, MAX));

void dijkstra(int s);

int main(){
    fast_io;

    cin >> n;
    cin >> b;

    for(int i=0; i<b; i++){
        int x, y, c;
        cin >> x >> y >> c;
        x--; y--;
        city[x][y] = min(city[x][y], c);
    }

    int start, end;
    cin >> start >> end;

    dis[start - 1] = 0;

    dijkstra(start - 1);

    cout << dis[end-1] << endl;

    int k = 0;
    int cur = end-1;
    vector<int> path;
    while (true) {
        path.push_back(cur);
        k++;
        if (cur == start - 1) break;
        cur = pre[cur];
    }
    reverse(path.begin(), path.end());

    cout << k << endl;
    for(int i=0; i<k; i++){
        cout << path[i]+1 << " ";
    }
    cout << endl;

    return 0;
}

void dijkstra(int s) {
    dis[s] = 0;

    for (int i = 0; i < n; i++) {
        int cur = -1;
        for (int j = 0; j < n; j++) {
            if (!visited[j] && (cur == -1 || dis[j] < dis[cur])) cur = j;
        }

        if (cur == -1) break;

        visited[cur] = true;

        for (int j = 0; j < n; j++) {
            if (city[cur][j] != MAX && dis[cur] + city[cur][j] < dis[j]) {
                dis[j] = dis[cur] + city[cur][j];
                pre[j] = cur;
            }
        }
    }
}

