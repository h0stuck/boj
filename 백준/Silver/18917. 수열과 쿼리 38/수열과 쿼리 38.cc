#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n;
    cin >> n;

    long long sum = 0, xr = 0;
    for(int i=0; i<n; i++){
        long long a, b;
        cin >> a;
        if(a == 1){
            cin >> b;
            sum += b;
            xr = xr ^ b;
        }
        else if(a == 2){
            cin >> b;
            sum -= b;
            xr = xr ^ b;
        }
        else if(a == 3){
            cout << sum << endl;
        }
        else{
            cout << xr << endl;
        }
    }

    return 0;
}