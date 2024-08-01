#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

unordered_map<ll, bool> visited;
ll a, b, r=0;

int bfs(ll n);

int main(){
    fast_io;

    cin >> a >> b;
    cout << bfs(a);
    
    return 0;
}

int bfs(ll n){
    queue<pair<ll, ll>> q;
    q.push(make_pair(n, 1));
    visited[n] = true;

    while(!q.empty()){
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();

        if(x == b){
            return y;
        }

        //cout << x << " ";
        if(!visited[x * 10 + 1] && x * 10 + 1 <= b * 10 + 1){
            q.push(make_pair(x * 10 + 1, y+1));
            visited[x * 10 + 1] = true;
        }
        
        if(x * 2 <= b * 2 && !visited[x * 2]){
            q.push(make_pair(x*2, y+1));
            visited[x*2] = true;
        }
    }

    return -1;
}
