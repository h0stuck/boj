#include <iostream>
#include <vector>
#define MAX 7
using namespace std;

int arr[MAX];
vector<int> vec;
int N, M;

void bt(int index, int a);

int main() {

	cin >> N;
    cin >> M;
	for (int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}
	bt(1, 0);
}

void bt(int index, int a){
	if (a == M) {
		for (int i = 0; i < vec.size(); i++)
		    cout << vec[i] << ' ';
	    cout << '\n';
		return;
	}

	for (int i = index; i <= N; i++)
	{
		vec.push_back(arr[i]);
		bt(i, a + 1);
		vec.pop_back();
	}
}
