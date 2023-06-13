#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {
    fast_io;
    priority_queue<int> small; // 내림차순
    priority_queue<int, vector<int>, greater<int>> big; // 오름차순
    int mid, n;

    cin >> n;
    cin >> mid;
    cout << mid << endl;

    for(int i=0; i<n-1; i++){
        int a;
        cin >> a;

        if(a < mid){
            small.push(a);
            //mid = a;
        }
        else if(a == mid){
            if(small.size() < big.size()){
                    small.push(a);
            }
            else{
                big.push(a);
            }
        }
        else if(a > mid){
            big.push(a);
        }

        if(big.size() < small.size()){
            big.push(mid);
            mid = small.top();
            small.pop();
        }
        else if(small.size()+1 < big.size()){
            small.push(mid);
            mid = big.top();
            big.pop();
        }

        cout << mid << endl;
    }

    return 0;
}