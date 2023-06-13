#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void dfs(int n);

vector<int> v[55];
bool visited[55];
int result = 0, c;

int main(){
    fast_io;

    int n, r;
    cin >> n;

    for(int i=0; i<n; i++){
        visited[n] = false;
        int a;
        cin >> a;
        if(a == -1) { r = i; }
        else { v[a].push_back(i); }
    }
    cin >> c;

    dfs(r);

    cout << result << endl;
}

void dfs(int n){
    visited[n] = true;
    if(v[n].empty() && n != c) { result++; }
    for(int i=0; i<v[n].size(); i++){
        int x = v[n][i];
        if(v[n].size() == 1 && x == c) { result++; }
        else if(!visited[x] && n != c) { dfs(x); }
    }
}