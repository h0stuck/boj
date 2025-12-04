#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int number = 5000001;
vector<int> primeNum(number, 0);

void primeNumberSieve()
{
    for (int i = 2; i <= number; i++)
    {
        primeNum[i] = i;
    }

    for (int i = 2; i <= sqrt(number); i++)
    {
        if (primeNum[i] == 0)
            continue;
        for (int j = i * i; j <= number; j += i)
            primeNum[j] = 0;
    }

}

int main(){
    fast_io;
    primeNumberSieve();

    deque<char> deq;
    int d = 0, n;
    cin >> n;

    for(int i=1; i<=n; i++){
        char c;
        if(!primeNum[i]) c = 'B';
        else{
            if(!deq.empty()){
                if(d == 0 && deq.front() == 'B'){
                    deq.pop_front();
                    deq.push_front('S');
                }
                else if(d == 1 && deq.back() == 'B'){
                    deq.pop_back();
                    deq.push_back('S');
                }
            }
            c = 'S';
        }
        if(d == 0) deq.push_front(c);
        else deq.push_back(c);

        if(primeNum[i]) d = !d;
    }

    int b = 0, s = 0;
    while(!deq.empty()){
        if(deq.front() == 'B') b++;
        else s++;
        deq.pop_front();
    }

    cout << b << " " << s;

    return 0;

}