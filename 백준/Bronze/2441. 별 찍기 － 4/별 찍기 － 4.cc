#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, k = 0;
    cin >> n;

    for(int i=0; i<n*n; i++){
        if(i%n >= k){
            cout << '*';
            if((i+1)%n == 0){
                cout << endl;
                k++;
            }
        }
        else{
            cout << " ";
        }
    }
    
    return 0;
}