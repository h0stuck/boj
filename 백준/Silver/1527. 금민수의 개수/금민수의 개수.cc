#include <iostream>

using namespace std;

using ll = long long;

int main()
{
    ll a, b, r = 0;
    cin >> a >> b;
    
    for(int i=a; i<=b; i++){
        int t = 1, k = i;
        while(k >= 1){
            if(k%10 != 4 && k%10 != 7){
                t = 0;
                break;
            }
            
            k /= 10;
        }
        
        r += t;
    }
    
    cout << r << endl;

    return 0;
}