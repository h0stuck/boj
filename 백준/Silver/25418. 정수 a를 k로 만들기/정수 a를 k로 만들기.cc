#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int bfs(int a, int k);

int main() {
    fast_io;

    int a, k;
    cin >> a >> k;
    cout << bfs(a, k) << endl;

    return 0;
}

int bfs(int a, int k) {
    queue<pair<int, int>> q;
    unordered_set<int> visited;
    q.push({a, 0});
    visited.insert(a);

    while (!q.empty()) {
        int cur = q.front().first;
        int steps = q.front().second;
        q.pop();

        if (cur == k) return steps;

        if (cur + 1 <= k && visited.find(cur + 1) == visited.end()) {
            q.push({cur + 1, steps + 1});
            visited.insert(cur + 1);
        }

        if (cur * 2 <= k && visited.find(cur * 2) == visited.end()) {
            q.push({cur * 2, steps + 1});
            visited.insert(cur * 2);
        }
    }

    return -1;
}
