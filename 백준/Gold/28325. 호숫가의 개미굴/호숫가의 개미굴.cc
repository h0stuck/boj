#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long

using namespace std;

vector<ll> v;
ll n, result = 0;

int main(){
    fast_io;

    cin >> n;
    for(int i=0; i<n; i++){
        ll a;
        cin >> a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        if(v[i] > 0){
            result += v[i];
            v[i] = -1;
        }
        else if(v[i] == 0){
            if(i+1 == n){
                if(v[0] == -1 && v[i-1] == -1){
                    result++;
                }
                else{
                    v[i] = -1;
                }
            }
            else{
                if(v[i-1] == -1){
                    result++;
                }
                else{
                    v[i] = -1;
                }
            }
        }
    }

    cout << result;
    return 0;
}