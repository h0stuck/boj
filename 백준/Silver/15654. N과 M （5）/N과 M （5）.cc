#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define MAX 8
using namespace std;

int arr[MAX];
bool visited[MAX];
vector<int> vec;
int cnt;
int N, M;

void bt(int a);
void pri();

int main() {
    fast_io;

	cin >> N;
    cin >> M;
	for (int i = 0; i < N; i++)
	{
	    cin >> arr[i];
		visited[i] = false;
	}
	
	sort(arr, arr+N);
	bt(0);
}

void bt(int a){
	if (a == M) {
		pri();
		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (visited[i]) { continue;} 
		visited[i] = true;
		vec.push_back(arr[i]);
		bt(a + 1);
		vec.pop_back();
		visited[i] = false;
	}
}

void pri(){
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << ' ';
	cout << endl;
	return;
}