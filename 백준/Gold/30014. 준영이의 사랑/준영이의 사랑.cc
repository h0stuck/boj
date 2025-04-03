#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;


int main(){
    fast_io;

    int n, r = 0;
    cin >> n;

    vector<int> v;
    deque<int> d;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        if(i % 2 == 0)
            d.push_front(v[i]);
        else
            d.push_back(v[i]);
    }

    for(int i=0; i<n-1; i++){
        r += d[i] * d[i+1];
    }
    r += d[0] * d[n-1];
    cout << r << endl;

    for(int i=0; i<n; i++){
        cout << d[i] << ' ';
    }
    cout << endl;

    return 0;

}
