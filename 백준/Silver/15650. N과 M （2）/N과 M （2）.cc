#include <iostream>
#include <vector>
#define MAX 8
using namespace std;

int arr[MAX];
bool visited[MAX];
vector<int> vec;
int N, M;

void bt(int index, int a);

int main() {

	cin >> N;
    cin >> M;
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
		visited[i] = false;
	}
	bt(0, 0);
}

void bt(int index, int a){
	if (a == M) {
		for (int i = 0; i < vec.size(); i++)
		    cout << vec[i] << ' ';
	    cout << '\n';
		return;
	}

	for (int i = index+1; i <= N; i++)
	{
		if (visited[i-1]) { continue;} 
		vec.push_back(arr[i-1]);
		visited[i-1] = true;
		bt(i, a + 1);
		vec.pop_back();
		visited[i-1] = false;
	}
}
