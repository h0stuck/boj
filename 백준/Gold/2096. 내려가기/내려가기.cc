#include <bits/stdc++.h>
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;

int main(){
    fast_io;
    
    int n;
    cin >> n;

    int prevMax[3], prevMin[3], currMax[3], currMin[3];

    for(int j=0; j<3; j++){
        int x;
        cin >> x;
        prevMax[j] = prevMin[j] = x;
    }

    for(int i=1; i<n; i++){
        for(int j=0; j<3; j++){
            int x;
            cin >> x;

            int maxV = 0, minV = INT_MAX;
            for(int k = max(0, j-1); k <= min(2, j+1); k++){
                maxV = max(maxV, prevMax[k]);
                minV = min(minV, prevMin[k]);
            }
            currMax[j] = x + maxV;
            currMin[j] = x + minV;
        }

        for(int j=0; j<3; j++){
            prevMax[j] = currMax[j];
            prevMin[j] = currMin[j];
        }
    }

    int maxR = *max_element(prevMax, prevMax + 3);
    int minR = *min_element(prevMin, prevMin + 3);

    cout << maxR << " " << minR << "\n";

    return 0;
}
