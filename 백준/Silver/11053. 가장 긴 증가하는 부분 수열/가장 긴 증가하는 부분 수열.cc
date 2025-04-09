#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v1.push_back(a);
        v2.push_back(1);
    }
    
    int r = 1;
    for(int i=0; i<n; i++){
        for(int j=i; j>=0; j--){
            if(v1[j] < v1[i] && v2[j] + 1 > v2[i]){
                v2[i] = v2[j] + 1;
                if(v2[i] > r) r = v2[i];
            }
        }
    }

    cout << r << endl;

    return 0;
}


