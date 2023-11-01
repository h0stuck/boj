#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void Solve();

int main(){
    fast_io;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        Solve();
    }
}

void Solve(){
    long long n, ans = 0;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> pq;
    for(int i=0; i<n; i++){
        long long a;
        cin >> a;
        pq.push(a);
    }

    while(pq.size() > 1){
        long long a = pq.top(); pq.pop();
        a += pq.top(); pq.pop();
        ans += a;
        pq.push(a);
    }
    cout << ans << endl;
}