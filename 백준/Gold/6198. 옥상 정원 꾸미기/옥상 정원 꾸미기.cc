#include <iostream>
#include <stack>
#include <algorithm>
#define endl '\n'
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

stack<long long> stk;

int main(){
    fast_io;

    long long n, result = 0;
    cin >> n;

    while(n--){
        long long a;
        cin >> a;

        if(stk.empty()){
            stk.push(a);
            continue;
        }

        while(!stk.empty() && stk.top() <= a){
            stk.pop();
        }
        result += stk.size();
        stk.push(a);
    }

    cout << result;

    return 0;
}