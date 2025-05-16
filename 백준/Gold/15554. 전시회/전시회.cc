#include<iostream>
#include<algorithm>
#include<vector>
#include<memory>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

struct art{
    long long a;
    long long b;
    art(long long _a, long long _b): a(_a), b(_b){}
};

bool predicate(const art& a1, const art& a2);

vector<art> v;
vector<long long> val;

int main(){
    fast_io;

    int n;
    cin >> n;

    long long k = 0;
    for(int i=0; i<n; i++){
        long long x, y;
        cin >> x;
        cin >> y;
        v.push_back(art(x, y));
    }
    sort(v.begin(), v.end(), predicate);

    val.push_back(0);
    for(int i=0; i<n; i++){
        k += v[i].b;
        val.push_back(k);
    }

    long long result = 0;
    long long max1, min = v[0].a;
    for(int i=1; i<=n; i++){
        max1 = v[i-1].a;
        long long m = val[i] - max1 + min;
        result = max(result, m);
        if(i == n) { break; }
        min = max(min, v[i].a - val[i]);
    }

    cout << result << endl;

    return 0;
}

bool predicate(const art& a1, const art& a2){
    if(a1.a < a2.a) { return true; }
    else if(a1.a > a2.a) { return false; }
    else { return a1.b < a2.b; }
}