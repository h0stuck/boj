#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long int;

int main(){
    fast_io;

    ll n;
    cin >> n;

    ll arr[7] = {0, };
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }

    ll t, p;
    cin >> t >> p;

    ll r = 0;
    for(int i=0; i<6; i++){
        r += (arr[i] + t - 1) / t;
    }

    cout << r << endl;
    cout << n / p << " " << n % p;

    return 0;
}
