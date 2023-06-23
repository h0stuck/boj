#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void merge(int a, int b);
int find(int x);

int par[55];
vector<int> v[55];
long long int ik = 0;

int n, m;

int main(){
    fast_io;

    int truth;
    cin >> n >> m >> truth;
    for(int i=0; i<truth; i++){
        long long a;
        cin >> a;
        ik |= (1ll << a);
    }

    for(int i=1; i<=n; i++){
        par[i] = i;
    }

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a;
        for(int j=0; j<a; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
            if(j > 0) merge(x, b);
            b = x;
        }
    }

    int result = m;
    for(int i=0; i<m; i++){
        for(int j=0; j<v[i].size(); j++){
            if(ik & (1ll << (long long)find(v[i][j]))){
                result--;
                break;
            }
        }
    }
    
    cout << result;

    return 0;
    
}

int find(int x){
    if(par[x] == x || par[x] == -1) return x;
    return par[x] = find(par[x]);
}

void merge(int a, int b){
    a = find(a);
    b = find(b);

    if(a == b) return;
    else if(ik & (1ll << (long long)par[a])) par[b] = a;
    else par[a] = b;

    return;
}