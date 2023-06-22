#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

bool visited[100005] = {false, };

int bfs(int k);

int n, m;

int main(){
    fast_io;

    cin >> n >> m;
    cout << bfs(n);

    return 0;
}

int bfs(int k){
    queue<pair<int, int>> q;
    q.push(make_pair(k, 0));
    visited[k] = true;

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        if(a == m) return b;
        if(a > 0 && !visited[a-1]){ 
            q.push(make_pair(a-1, b+1));
            visited[a-1] = true;
        }
        if(a < 100000 && !visited[a+1]){ 
            q.push(make_pair(a+1, b+1));
            visited[a+1] = true;
        }
        if(a*2 <= m+1 && !visited[a*2]){ 
            q.push(make_pair(a*2, b+1));
            visited[a*2] = true;
        }
    }
    return -1;
}
