#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void dfs(int a);
void dfs2(int a);

vector<int> v[10005];
vector<int> v2[10005];
bool visited[10005];
bool visited2[10005];
int n, result = 0, result2 = 0;

int main(){
    fast_io;

    //int n, m;
    cin >> n;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        for(int j=0; j<n; j++){
            if(a[j] == 'R') { v[i*n + j].push_back(0); }
            else if(a[j] == 'G') { v[i*n + j].push_back(1); }
            else { v[i*n + j].push_back(2); }

            if(a[j] == 'B') { v2[i*n + j].push_back(0); }
            else { v2[i*n + j].push_back(1); }

            if(i > 0) { v[i*n + j].push_back((i - 1) * n + j); v2[i*n + j].push_back((i - 1) * n + j); }
            if(i < n-1) { v[i*n + j].push_back((i + 1) * n + j); v2[i*n + j].push_back((i + 1) * n + j); }
            if(j > 0) { v[i*n + j].push_back(i*n + j - 1); v2[i*n + j].push_back(i*n + j - 1); }
            if(j < n-1) { v[i*n + j].push_back(i*n + j + 1); v2[i*n + j].push_back(i*n + j + 1); }

            visited[i*n + j] = false;
            visited2[i*n + j] = false;
        }
    }

    for(int i=0; i<n*n; i++){
        if(!visited[i]){
            dfs(i);
            result++;
        }
    }
    for(int i=0; i<n*n; i++){
        if(!visited2[i]){
            dfs2(i);
            result2++;
        }
    }

    cout << result << " " << result2;

    return 0;
}

void dfs(int a){
    visited[a] = true;
    for(int i=1; i<v[a].size(); i++){
        int x = v[a][i];
        if(!visited[x] && v[a][0] == v[x][0]) { dfs(x); }
    }
}

void dfs2(int a){
    visited2[a] = true;
    for(int i=1; i<v2[a].size(); i++){
        int x = v2[a][i];
        if(!visited2[x] && v2[a][0] == v2[x][0]) { dfs2(x); }
    }
}