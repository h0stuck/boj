#include <iostream>
#include <utility>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    stack<pair<int, int>> a;
    stack<pair<int, int>> b;
    vector<int> vec;
    
    int n;
    cin >> n;
    
    vec.resize(n + 1, 0);
    
    for(int i = 1; i <= n; i++){
        int k;
        cin >> k;
        a.push({i, k});
    }
    
    for(int i = 0; i < n; i++){
        if (a.empty()) break;
        
        while (!b.empty() && b.top().second <= a.top().second) {
            vec[b.top().first] = a.top().first;
            b.pop();
        }
        
        b.push(a.top());
        a.pop();
    }
    
    for(int i = 1; i <= n; i++){
        cout << vec[i] << " ";
    }
    
    return 0;
}
