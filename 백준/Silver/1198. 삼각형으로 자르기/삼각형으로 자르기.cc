#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {
    fast_io;

    int n;
    cin >> n;

    vector<long double> xp(n), yp(n);
    for (int i = 0; i < n; i++) {
        long double x, y;
        cin >> x >> y;
        xp[i] = x; yp[i] = y;
    }

    long double r = 0.0L;
    for (int i = 0; i < n; i++) {
        long double x1 = xp[i], y1 = yp[i];
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            long double x2 = xp[j], y2 = yp[j];
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;
                long double x3 = xp[k], y3 = yp[k];
                long double area2 =
                    fabsl((x1*y2 + x2*y3 + x3*y1) - (y1*x2 + y2*x3 + y3*x1));
                r = max(r, area2 / 2.0L);
            }
        }
    }

    cout << fixed << setprecision(1) << r << endl;
    return 0;
}
