#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

bool compare(string a, string b){
    if(a.size() == b.size()){
        return a < b;
    }
    else{
        return a.size() < b.size();
    }
}

int main(){
    fast_io;

    int n;
    cin >> n;

    vector<string> v;
    set<string> s;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        s.insert(a);
    }

    for(auto x : s){
        v.push_back(x);
    }

    sort(v.begin(), v.end(), compare);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    
    return 0;

}