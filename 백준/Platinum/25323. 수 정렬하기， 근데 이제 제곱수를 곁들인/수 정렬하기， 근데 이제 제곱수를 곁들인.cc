#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <numeric>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

bool isSqr(unsigned long long n);
bool test(unsigned long long a, unsigned long long b);

vector<unsigned long long> v;
vector<unsigned long long> v2;

int main(){
    fast_io;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        unsigned long long a;
        cin >> a;
        v.push_back(a);
    }
    v2 = v;

    sort(v2.begin(), v2.end());

    for(int i=0; i<n; i++){
        if(v[i] != v2[i]){
            if(!test(v[i], v2[i])){
                cout << "NO";
                return 0;
            }
            v2[i] = v[i];
        }
    }
    cout << "YES";
    return 0;
}

bool isSqr(unsigned long long n){
    double temp = sqrt(n);
    return temp == static_cast<unsigned long long>(temp);
}

bool test(unsigned long long a, unsigned long long b){
    unsigned long long gcd_ = gcd(a, b);
    return isSqr(a / gcd_) && isSqr(b / gcd_);
}
