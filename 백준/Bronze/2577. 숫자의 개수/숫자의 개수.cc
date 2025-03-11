#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();

int main(){
    fast_io;

    int a, b, c, k;
    cin >> a >> b >> c;
    k = a * b * c;

    int arr[11] = {0, };

    do{
        arr[k%10] += 1;
        k = k/10;
    }while(k >= 1);

    for(int i=0; i<10; i++){
        cout << arr[i] << endl;
    }

    return 0;

}