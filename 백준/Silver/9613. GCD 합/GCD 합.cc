#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();
int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main() {

	int n;
	cin >> n;
	while(n--){
		solve();
	}
}

void solve(){
	long long n, r = 0;
	cin >> n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int a;
		cin >> a;
		v.push_back(a);
	}

	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			r += gcd(v[i], v[j]);
		}
	}

	cout << r << endl;
}
