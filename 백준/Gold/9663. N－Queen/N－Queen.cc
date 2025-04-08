#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int N, R = 0;
int visited[20][20];

void bt(int d);

int main(){
    fast_io;

    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            visited[i][j] = 0;
        }
    }
    
    bt(-1);

    cout << R << endl;

    return 0;
}

void bt(int d){
    if(d == N-1){
        R++;
        return;
    }

    for(int i=0; i<N; i++){
        if(visited[i][d+1] > 0) { continue; }

        for(int j=0; j+d+1<N; j++){
            visited[i][d+j+1] += 1;
            if(i + j < N) visited[i+j][d+j+1] += 1;
            if(i - j >= 0) visited[i-j][d+j+1] += 1;
        }

        bt(d+1);

        for(int j=0; j+d+1<N; j++){
            visited[i][d+j+1] -= 1;
            if(i + j < N) visited[i+j][d+j+1] -= 1;
            if(i - j >= 0) visited[i-j][d+j+1] -= 1;
        }
    }

    return;
}
