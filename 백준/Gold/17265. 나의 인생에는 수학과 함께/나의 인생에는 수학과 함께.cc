#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int cal(int op, int a, int b);

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<vector<int>> map(n, vector<int>(n, 0));
    vector<vector<int>> maxMap(n, vector<int>(n, -999999));
    vector<vector<int>> minMap(n, vector<int>(n, 999999));

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i + j) % 2 == 0)
                cin >> map[i][j];
            else{
                char a;
                cin >> ws >> a;
                map[i][j] = (int)a;
            }
        }
    }

    maxMap[0][0] = map[0][0];
    minMap[0][0] = map[0][0];

    for(int i=0; i<n+2; i+=2){
        for(int j=0; j<=i; j++){
            int x = j;
            int y = i - j;

            if(x < n && y < n){
                if(x + 2 < n){
                    maxMap[x+2][y] = max(maxMap[x+2][y], cal(map[x+1][y], maxMap[x][y], map[x+2][y]));
                    minMap[x+2][y] = min(minMap[x+2][y], cal(map[x+1][y], minMap[x][y], map[x+2][y]));
                }

                if(x + 1 < n && y + 1 < n){
                    maxMap[x+1][y+1] = max(maxMap[x+1][y+1], cal(map[x+1][y], maxMap[x][y], map[x+1][y+1]));
                    minMap[x+1][y+1] = min(minMap[x+1][y+1], cal(map[x+1][y], minMap[x][y], map[x+1][y+1]));

                    maxMap[x+1][y+1] = max(maxMap[x+1][y+1], cal(map[x][y+1], maxMap[x][y], map[x+1][y+1]));
                    minMap[x+1][y+1] = min(minMap[x+1][y+1], cal(map[x][y+1], minMap[x][y], map[x+1][y+1]));
                }

                if(y + 2 < n){
                    maxMap[x][y+2] = max(maxMap[x][y+2], cal(map[x][y+1], maxMap[x][y], map[x][y+2]));
                    minMap[x][y+2] = min(minMap[x][y+2], cal(map[x][y+1], minMap[x][y], map[x][y+2]));
                }
            }
        }
        
    }

    cout << maxMap[n-1][n-1] << " " << minMap[n-1][n-1] << endl;

    return 0;

}

int cal(int op, int a, int b){
    if(op == 42)
        return a * b;
    else if(op == 43)
        return a + b;
    else
        return a - b;
}