#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main(){
    fast_io;

    int n, m;
    cin >> n >> m;

    vector<vector<int>> map(n + 1, vector<int>(n + 1, 0));
    for(int i=1; i<=n; i++){
        map[i].push_back(0);
        for(int j=1; j<=n; j++){
            int a;
            cin >> a;
            map[i][j] = a + map[i][j-1] + map[i-1][j] - map[i-1][j-1];
        }
    }
    
    while(m--){
        int x1, y1, x2, y2, r = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        
        r += map[x2][y2];
        r -= map[x2][y1-1];
        r -= map[x1-1][y2];
        r += map[x1-1][y1-1];

        cout << r << endl;
    }

    return 0;

}
