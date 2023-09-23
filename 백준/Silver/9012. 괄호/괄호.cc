#include <iostream>
#include <algorithm>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main() {
    fast_io;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string a;
        cin >> a;
        int open = 0;
        for(int j=0; j<a.size(); j++){
            if(a[j] == '(') open++;
            else if(a[j] == ')') open--;
            if(open < 0) break;
        }
        if(open == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
