#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n, m, k=0;
int ind[1005] = {0, };
int result[1005] = {0, };

vector<int> v[1005];
queue<int> q;

int main(){
    fast_io;

    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        ind[b]++;
    }

    int l = 0;
    while(k < n){
        l++;
        for(int i=1; i<=n; i++){
            if(ind[i] == 0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int x = q.front();
            q.pop();
            result[x] = l;
            for(int j=0; j<v[x].size(); j++){
                ind[v[x][j]]--;
            }
            ind[x] = -1;
            k++;
        }
    }

    for(int i=1; i<=n; i++){
        cout << result[i] << " ";
    }

    return 0;

}