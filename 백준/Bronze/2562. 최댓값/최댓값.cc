#include <iostream>

using namespace std;

int main()
{
    int max = 0, maxNum = 0;
    
    for(int i=1; i<=9; i++){
        int a;
        cin >> a;
        if(a > max){
            max = a;
            maxNum = i;
        }
    }
    
    cout << max << endl << maxNum;

    return 0;
}