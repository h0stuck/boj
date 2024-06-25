#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;


int main(){
    fast_io;
    cout << fixed;
	cout.precision(2);

    long int n;
    long double f, p, d;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> d;
        cin >> f;
        cin >> p;
        cout << '$' << d*f*p << endl;
    }
    return 0;
}
