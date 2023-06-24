#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

vector<int> v;

int main() {
    fast_io;

    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    
    sort(v.begin(), v.end());
    
    cout << v[0] * v[n-1];

    return 0;
}