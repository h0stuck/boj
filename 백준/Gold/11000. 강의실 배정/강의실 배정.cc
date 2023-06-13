#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

struct cmp1{
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        if(p1.first == p2.first){
            return p1.second > p2.second;
        }
        return p1.first > p2.first;
    }
};

struct cmp2{
    bool operator()(pair<int, int> p1, pair<int, int> p2){
        return p1.second > p2.second;
    }
};

int main(){ //11000
    fast_io;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp1> pq;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp2> pq2;

    int n, result = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        int x, y;
        cin >> x >> y;
        pq.push(make_pair(x, y));
    }

    for(int i=0; i<n; i++){
        pair<int, int> p = pq.top();
        pq.pop();
        if(pq2.empty() || pq2.top().second > p.first){
            pq2.push(p);
            if(pq2.size() > result) result = pq2.size();
        }
        else{
            pq2.pop();
            pq2.push(p);
        }
    }

    cout << result;
    return 0;
}