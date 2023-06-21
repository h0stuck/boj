#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    int n, res = 0;
    stack<pair<int, int>> s;
    cin >> n;
    while (n--)
    {
        bool num;
        cin >> num;
        if (num == 1)
        {
            int a, b;
            cin >> a >> b;
            s.push(make_pair(a, b));
        }
        if (!s.empty())
        {
            s.top().second--;
            if (s.top().second == 0)
            {
                res += s.top().first;
                s.pop();
            }
        }
    }
    cout << res;

}