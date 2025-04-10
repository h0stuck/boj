#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, r = 0;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        v1.push_back(a);
        v2.push_back(a);

        int maxV = 0;
        for(int j=i-1; j>=0; j--){
            if(maxV < v2[j] && v1[i] > v1[j]){
                maxV = v2[j];
            }
        }
        v2[i] += maxV;

        if(v2[i] > r) r = v2[i];
    }

    cout << r << endl;

    return 0;
}
