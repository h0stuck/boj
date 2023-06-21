#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

const int MAX = 100005;

int minFactor[MAX];

vector<int> prime;

void eratosthenes(void);

int main(void){
    fast_io;

    int A, B;
    cin >> A >> B;

    int result = 0;

    eratosthenes();

    for (int i = A; i <= B; i++){
        int cnt = 0;
        int temp = i;

        for (int j = 0; j < prime.size(); j++){
            while (!(temp % prime[j]))
            {
                cnt++;
                temp /= prime[j];
                if (temp == 1)
                    break;
            }

            if (temp == 1)
                break;
        }

        if (minFactor[cnt] == cnt)
            result++;
    }

    cout << result << endl;

    return 0;
}

void eratosthenes(void){

    minFactor[0] = minFactor[1] = -1;

    for (int i = 2; i < MAX; i++){
        minFactor[i] = i;
    }

    for (int i = 2; i * i < MAX; i++){
        if (minFactor[i] == i){
            for (int j = i * i; j < MAX; j += i){
                if (minFactor[j] == j)
                    minFactor[j] = i;
            }
        }
    }

    for (int i = 2; i < MAX; i++){
        if (minFactor[i] == i)
            prime.push_back(i);
    }
}