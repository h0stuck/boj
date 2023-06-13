#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n, m, k=0;
int ind[32005] = {0, };
vector<int> v[32005];
vector<int> result;

int main(){
    fast_io;

    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        ind[b]++;
    }

    while(k < n){
        for(int i=1; i<=n; i++){
            if(ind[i] == 0){
                result.push_back(i);
                for(int j=0; j<v[i].size(); j++){
                    ind[v[i][j]]--;
                }
                ind[i] = -1;
                k++;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << result[i] << " ";
    }

    return 0;

}