#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

#define MAX 8
using namespace std;

vector<int> arr;
vector<int> vec;
int N, M;

void bt(int a, vector<bool> visitedIndex);

int main() {

	cin >> N;
    cin >> M;
	for (int i = 0; i < N; i++)
	{
        int a;
        cin >> a;
        arr.push_back(a);
	}

    sort(arr.begin(), arr.end());

    vector<bool> visited(10, false);
    
    bt(0, visited);
}

void bt(int a, vector<bool> visitedIndex){
	if (a == M) {
		for (int i = 0; i < vec.size(); i++)
		    cout << vec[i] << ' ';
	    cout << '\n';
		return;
	}

    vector<bool> visitedNumber(100001, false);
	for (int i = 0; i < N; i++)
	{
		if (visitedNumber[arr[i]] || visitedIndex[i]) { continue; } 
		vec.push_back(arr[i]);
		visitedNumber[arr[i]] = true;
        visitedIndex[i] = true;
		bt(a + 1, visitedIndex);
		vec.pop_back();
        visitedIndex[i] = false;
	}
}
