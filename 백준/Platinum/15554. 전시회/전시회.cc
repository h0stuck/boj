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
        k += y;
    }
    sort(v.begin(), v.end(), predicate);
    long long max = 0;
    //cout << "made lv" << endl;
    for(int i=0; i<n; i++){
        long long m = k - v[i].a + v[n-1].a;
        for(int j=n-1; j>i; j--){
            if(m > max){
                max = m;
            }
            m = m - v[j].a - v[j].b + v[j-1].a;
            if(m > max){
                max = m;
            }
        }
        k -= v[i].b;
    }
    //reverse(v.begin(), v.end());
    cout << max << endl;

    return 0;
}

bool predicate(const art& a1, const art& a2){
    if(a1.a > a2.a) { return true; }
    else if(a1.a < a2.a) { return false; }
    else { return a1.b > a2.b; }
}