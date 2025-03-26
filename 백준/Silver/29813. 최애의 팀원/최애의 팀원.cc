#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using student = pair<string, int>;

queue<student> q;

int main(){
    fast_io;

    int n;
    cin >> n;

    while(n--){
        student a;
        cin >> a.first >> a.second;
        q.push(a);
    }

    while(q.size() > 1){
        student st = q.front();
        q.pop();
        for(int x=1; x<st.second; x++){
            q.push(q.front());
            q.pop();
        }
        q.pop();
    }

    cout << q.front().first << endl;

    return 0;

}
