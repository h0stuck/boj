#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

const int INF = 10e9;

struct P{
    int v; //정점
    int w; //거리
};

bool operator < (P a, P b){
    return a.w > b.w;
}

void dijkstra(int start);

int dist[50005] = {0, };
vector<P> v[50005];
priority_queue<P> pq;

int n, m, x, y;

int main(){
    fast_io;

    int m;
    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for(int i=1; i<=n; i++){
        dist[i] = INF;
    }
    cin >> x >> y;

    dijkstra(x);
    cout << dist[y] << endl;
    
}

void dijkstra(int start){
    dist[start] = 0;
    pq.push({start, dist[start]});

    while(!pq.empty()){
        P cur = pq.top();
        int curv = cur.v, curw = cur.w;
        pq.pop();

        if(dist[curv] < curw) continue;

        for(int i=0; i<v[curv].size(); i++){
            P p = v[curv][i];
            int nextv = p.v, nextw = p.w;

            if(dist[curv] + nextw  < dist[nextv]){
                dist[nextv] = dist[curv] + nextw;
                pq.push({nextv, dist[nextv]});

            }
        }
    }
}