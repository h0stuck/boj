#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int main(){
    fast_io;

    char map[105][105];
    int ans = 0;
    
    int x, y;
    cin >> x >> y;

    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            cin >> map[i][j];
        }
    }

    int ser[8] = {1, 1, 0, -1, 0, -1, -1, -1};
    for(int i=1; i<=x; i++){
        for(int j=1; j<=y; j++){
            if(map[i][j] == 'O'){
                for(int k=0; k<4; k++){
                    int ix = ser[k], iy = ser[4+k];
                    if(map[i + ix][j + iy] == 'F' && map[i - ix][j - iy] == 'X'){
                        ans++;
                    }
                    if((map[i + ix][j + iy] == 'X' && map[i - ix][j - iy] == 'F')){
                        ans++;
                    }
                }
            }
        }
    }
    
    cout << ans << endl;

    return 0;
}