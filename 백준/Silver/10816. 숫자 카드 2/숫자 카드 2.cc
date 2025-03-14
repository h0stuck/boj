#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;


    int n;
    cin >> n;

    unordered_map<int, int> map;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(map.count(a) > 0){
            int k = map.find(a)->second;
            map.erase(a);
            map.insert(make_pair(a, k + 1));
        }
        else
            map.insert(make_pair(a, 1));
    }

    int m;
    cin >> m;

    for(int i=0; i<m; i++){
        int a;
        cin >> a;
        if(map.count(a) > 0)
            cout << map.find(a)->second << " ";
        else
            cout << "0 ";
    }
}