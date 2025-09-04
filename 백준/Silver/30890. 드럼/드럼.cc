#include <iostream>

using namespace std;

int main()
{
    int x, y, t;
    
    cin >> x >> y;
    t = x * y;
    
    for(int i=1; i<=t; i++){
        if(i % x == 0 && i % y == 0) cout << 3;
        else if(i % x == 0) cout << 2;
        else if(i % y == 0) cout << 1;
    }
    
    cout << endl;

    return 0;
}