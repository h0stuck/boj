#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;

    int n;
    cin >> n;

    string s;
    cin >> s;

    int arr[26] = {0, };

    for(int i=0; i<n/2; i++){
        arr[(int)s[i] - 97]++;
        arr[(int)s[n-1-i] - 97]++;
    }

    for(int i=0; i<26; i++){
        if(arr[i] % 2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;

}