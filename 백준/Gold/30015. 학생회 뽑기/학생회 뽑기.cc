#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int result = 0;

    for(int bit = 20; bit >= 0; bit--) {
        int temp = result | (1 << bit);
        vector<int> possible;

        for (int i = 0; i < n; i++) {
            if ((v[i] & temp) == temp) {
                possible.push_back(v[i]);
            }
        }

        if ((int)possible.size() >= k) {
            result = temp;
        }
    }

    cout << result << endl;
    return 0;
}
