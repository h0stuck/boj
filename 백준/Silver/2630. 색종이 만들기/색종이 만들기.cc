#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void rec(int a, int b, int size);

int n;
int field[2030][2030];
int dx[] = {0, 1, 0, 1};
int dy[] = {0, 0, 1, 1};
int white = 0, blue = 0;

int main(){
    fast_io;

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> field[i][j];
        }
    }
    rec(0, 0, n);

    cout << white << endl;
    cout << blue << endl;
}

void rec(int a, int b, int size){
    int c = field[a][b];
    if(size == 0){
        if(c == 0) { white++; return; }
        else if(c == 1) { blue++; return; }
    }

    for(int i=a; i<a+size; i++){
        for(int j=b; j<b+size; j++){
            if(field[i][j] != c){
                c = -1;
                break;
            }
        }
        if(c == -1) break;
    }

    if(c == 0) white++;
    else if(c == 1) blue++;
    else{
        for(int i=0; i<4; i++){
            rec(a + size*dx[i]/2, b + size*dy[i]/2, size/2);
        }
    }

    return;
}