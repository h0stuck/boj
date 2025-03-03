#include <iostream>
#include <vector>
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

	cin >> N;
    cin >> M;
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
		visited[i] = false;
	}
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
	cout << '\n';
	return;
}