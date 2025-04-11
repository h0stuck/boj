#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int n;
int field[105][105] = {0, };

queue<pair<int, int>> q;

int main(){
    fast_io;

    cin >> n;
    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        q.push(make_pair(x, y));
    }

    int result = 0;
    for(int i=0; i<n; i++){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                if(field[x+j][y+k] == 0){
                    field[x+j][y+k] = 1;
                    result++;
                }
            }
        }
    }

    cout << result;

    return 0;
    
}