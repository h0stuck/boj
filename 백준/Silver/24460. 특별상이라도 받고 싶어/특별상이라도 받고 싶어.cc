#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int rec(int a, int b, int size);

int n;
int field[2030][2030];
int dx[] = {0, 1, 0, 1};
int dy[] = {0, 0, 1, 1};

int main(){
    fast_io;

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> field[i][j];
        }
    }

    if(n == 1) cout << field[0][0];
    else cout << rec(0, 0, n);
}

int rec(int a, int b, int size){
    unsigned int first = 2147483648;
    unsigned int second = 2147483648;
    for(int i=0; i<4; i++){
        int k;
        if(size == 2) k = field[a + dx[i]][b + dy[i]];
        else k = rec(a + size*dx[i]/2, b + size*dy[i]/2, size/2);

        if(k < first){
            second = first;
            first = k;
        }
        else if(k < second){
            second = k;
        }
    }
    return second;
}