#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<memory>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

bool pred(const long long& a, const long long& b);
bool ln(long long a, long long b);

vector<long long> v;

int main() {
    fast_io;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), pred);
    if (v[0] == 0) { cout << 0; }
    else {
        for (int i = 0; i < n; i++) {
            cout << v[i];
        }
    }
    cout << endl;

    return 0;

}

bool pred(const long long& a, const long long& b){
    if(a == 0) { return false; }
    else if(b == 0) { return true; }
    else if((int)log10(a) == (int)log10(b)) { return a > b; }
    else { return ln(a, b); }
}

bool ln(long long a, long long b){
    return a * pow(10, (int)log10(b)+1) + b > b * pow(10, (int)log10(a)+1) + a;
}