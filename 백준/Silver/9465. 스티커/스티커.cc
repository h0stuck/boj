#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();

int main(){
    fast_io;

    int t;
    cin >> t;

    while(t--) solve();

    return 0;
}

void solve(){

    int n;
    cin >> n;

    int arr[2][100005] = {0, };
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=1; i<n; i++){
        if(i-2 >= 0){
            arr[0][i] += max(arr[1][i-1], arr[1][i-2]);
            arr[1][i] += max(arr[0][i-1], arr[0][i-2]);
        }
        else{
            arr[0][i] += arr[1][i-1];
            arr[1][i] += arr[0][i-1];
        }
    }

    cout << max(arr[1][n-1], arr[0][n-1]) << endl;

    return;

}