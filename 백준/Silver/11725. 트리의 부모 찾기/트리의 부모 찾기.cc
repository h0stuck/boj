#include <iostream>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

vector<int> v[100001];
vector<int> answer(100001, 0);
vector<bool> visited(100001, false);

void dfs(int n);

int main() {
    fast_io;
    int n;
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1);

    for(int i = 2; i <= n; i++) {
        cout << answer[i] << endl;
    }

    return 0;
}

void dfs(int n) {
    visited[n] = true;
    for(int i = 0; i < v[n].size(); i++) {
        int x = v[n][i];
        if(!visited[x]) {
            answer[x] = n;
            dfs(x);
        }
    }
}
