#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define MAX 99999999

using namespace std;

int n, b;

bool visited[1001] = {false, };
vector<int> dis(1001, MAX);

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
        city[y][x] = min(city[y][x], c);
    }

    int a, b;
    cin >> a >> b;

    dijkstra(0);
    int d_0a = dis[a-1];
    int d_0b = dis[b-1];
    int d_0n = dis[n-1];

    dijkstra(a-1);
    int d_ab = dis[b-1];
    int d_an = dis[n-1];

    dijkstra(b-1);
    int d_bn = dis[n-1];

    int route1 = d_0a + d_ab + d_bn;  // 0 → a → b → n-1
    int route2 = d_0b + d_ab + d_an;  // 0 → b → a → n-1
    int answer = min(route1, route2);

    if (answer >= MAX)
        cout << -1 << endl;
    else
        cout << answer << endl;


    return 0;
}

void dijkstra(int s) {
    fill(visited, visited + n, false);
    fill(dis.begin(), dis.begin() + n, MAX);
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
            }
        }
    }
}


