#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    vector<pair<string, int>> v;
    string s;
    int n;

    int i=0, r=0;
    do{
        cin >> s >> n;
        v.push_back(make_pair(s, n));
        if(v[i].second < v[r].second) r = i;
        i++;

    }while(s.compare("Waterloo") != 0);

    cout << v[r].first;
    
    return 0;
}
