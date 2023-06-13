#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void merge(int a, int b);
int find(int x);
void civMerge();
void bfs();

int world[2005][2005];
int par[100005];

int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

queue<pair<int, int>> uniq;
queue<pair<int, int>> bfsq;
int n, k;

int main(){
    fast_io;

    cin >> n >> k ;

    //memset(par, -1, sizeof(par));
    for(int i=1; i<=k; i++){
        int x, y;
        cin >> x >> y;
        uniq.push(make_pair(x-1, y-1));
        world[x-1][y-1] = i;
    }
    for(int i=0; i<100001; i++) par[i] = i;

    int j;
    for(j=0; k>1; j++){
        civMerge();
        if(k <= 1) break;
        bfs();
    }

    cout << j;

    return 0;

}

int find(int x){
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void merge(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;
    else par[a] = b;

    return;
}

void civMerge(){
    while(!uniq.empty()){
        int x = uniq.front().first;
        int y = uniq.front().second;
        bfsq.push(make_pair(x, y));
        uniq.pop();

        for(int i=0; i<4; i++){
            int kx = x + dx[i];
            int ky = y + dy[i];
            int civ1 = world[x][y];

            if(kx >= 0 && kx < n && ky >= 0 && ky < n){
                int civ2 = world[kx][ky];
                if(civ1 != civ2 && find(civ1) != find(civ2) && civ2 != 0){
                    merge(civ1, civ2);
                    k--;
                }
            }
        }
    }
}

void bfs(){
    while(!bfsq.empty()){
        int x = bfsq.front().first;
        int y = bfsq.front().second;
        bfsq.pop();

        for(int i=0; i<4; i++){
            int kx = x + dx[i];
            int ky = y + dy[i];

            if(kx >= 0 && kx < n && ky >= 0 && ky < n && world[kx][ky] == 0){
                world[kx][ky] = world[x][y];
                uniq.push(make_pair(kx, ky));
            }
        }
    }
}