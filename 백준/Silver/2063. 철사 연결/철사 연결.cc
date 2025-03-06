#include <bits/stdc++.h>

using namespace std;

int main() {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<double> v(n);
        for (auto &i: v) cin >> i;
        sort(v.begin(), v.end());
        
        double s = 0;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (s >= v[i]) {
                flag = true;
                break;
            }

            s += v[i];
        }

        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
}