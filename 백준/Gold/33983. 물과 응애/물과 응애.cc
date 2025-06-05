#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b){
    if(a.second.first == b.second.first) return a.second.second > b.second.second;
    else return a.second.first < b.second.first;
}

int main(){
    fast_io;

    int n;
    cin >> n;

    string s;
    cin >> s;

    int totalH = 0, totalO = 0, countH = 0;
    for(int i=0; i<n; i++){
        if(s[i] == 'H'){
            totalH++;
            if(totalO > countH) countH++;
        }
        else{
            totalO++;
            if(totalO > totalH){
                cout << "mix" << endl;
                return 0;
            }
        }
    }

    if(totalO != countH || totalO*2 != totalH){
        cout << "mix" << endl;
    }
    else{
        cout << "pure" << endl;
    }

    return 0;
}