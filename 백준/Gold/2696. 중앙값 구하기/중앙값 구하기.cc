#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

void solve();

int main() {
    fast_io;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        solve();
        cout << endl;
    }

    return 0;
}

void solve(){
    fast_io;

    vector<int> r;

    priority_queue<int> small; // 내림차순
    priority_queue<int, vector<int>, greater<int>> big; // 오름차순
    int mid, n;

    cin >> n;
    cin >> mid;
    r.push_back(mid);
    //cout << mid << " ";

    for(int i=0; i<n-1; i++){
        int a;
        cin >> a;

        if(a < mid){
            small.push(a);
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

        //cout << mid << " ";
        if(i%2 != 0)
            r.push_back(mid);
    }

    cout << r.size() << endl;
    for(int i=0; i<r.size(); i++){
        cout << r[i] << " ";
    }

}