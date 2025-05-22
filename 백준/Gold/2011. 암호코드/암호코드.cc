#include <iostream>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

using ll = long long;

int main()
{
    ll dp[5004] = {0, };
    string s;
    cin >> s;
    
    s = '0' + s + '1';
    dp[0] = 1;
    dp[1] = 1;
    if(s[1] == '0') dp[1] = 0;
    if(s[1]-'0' > 2 && s[2] == '0') dp[1] = 0;
    for(int i=2; i<s.length()-1; i++){
        if((s[i]-'0') + (s[i-1]-'0')*10 <= 26 && s[i-1] != '0' && s[i] != '0'
        && s[i+1] != '0'){
            dp[i] = (dp[i-1] + dp[i-2]) % 1000000;
            //cout << i << " " << dp[i] << endl;
        }
        else{
            if(s[i]-'0' > 2 && s[i+1] == '0'){
                cout << 0 << endl;
                return 0;
            }
            else if(s[i]-'0' < 1 && s[i+1] == '0'){
                cout << 0 << endl;
                return 0;
            }
            dp[i] = dp[i-1] % 1000000;
        }
    }
    
    cout << dp[s.length()-2] << endl;

    return 0;
}