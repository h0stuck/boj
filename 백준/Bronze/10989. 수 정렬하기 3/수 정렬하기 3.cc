#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int arr[10005] = {0, };
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr[x]++;
    }

    for(int i=1; i<=10000; i++){
        for(int j=0; j<arr[i]; j++){
            cout << i << endl;
        }
    }
    return 0;
}