#include <iostream>
#include <algorithm>
#include <queue>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;


int main(){
    fast_io;

    int n, m;
    cin >> n >> m;

    queue<int> q;
    for(int i=1; i<=n; i++){
        q.push(i);
    }

    cout << "<";
    for(int i=1; !q.empty(); i++){
        if(i % m != 0){
            q.push(q.front());
        }
        else{
            cout << q.front();
            if(q.size() > 1){
                cout << ", ";
            }
        }
        q.pop();
    }
    cout << ">";

    return 0;
}
