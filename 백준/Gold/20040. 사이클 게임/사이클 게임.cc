#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

vector<int> parent(500005, 0);
vector<int> ran(1000005, 0);

int find(int u) {
	if (u == parent[u]) return u;
	return parent[u] = find(parent[u]);
}

void merge(int u, int v) {
	u = find(u);
	v = find(v);
	if (u == v) return;
	if (ran[u] > ran[v]) swap(u, v);
	parent[u] = v;
	if (ran[u] == ran[v]) ran[v]++;
}

int main() {
	int n, t, r = 0;
	cin >> n >> t;
	parent.resize(n);
	ran.assign(n, 0);
	for(int i=0; i<n; i++) parent[i] = i;

	for(int i=0; i<t; i++){
		int a, b, fa, fb;
		cin >> a >> b;
		fa = find(a); fb = find(b);
		if(fa != -1 && fb != -1 && fa == fb){
			r = i+1;
			break;
		}
		else{
			merge(a, b);
		}
	}

	cout << r << endl;
}
