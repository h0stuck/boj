#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

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

    while(!q.empty()){
        ll x = q.front().first;
        ll y = q.front().second;
        q.pop();

        if(x == b){
            return y;
        }

        //cout << x << " ";
        if(x * 10 + 1 <= b * 10 + 1){
            q.push(make_pair(x * 10 + 1, y+1));
        }
        
        if(x * 2 <= b * 2){
            q.push(make_pair(x*2, y+1));
        }
    }

    return -1;
}
