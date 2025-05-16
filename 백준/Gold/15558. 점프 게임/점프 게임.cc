#include <bits/stdc++.h>
#define endl "\n"
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

using namespace std;
using ll = long long;

int n, k;
bool visited1[100005], visited2[100005];
int line1[100005], line2[100005];

int solve(int l, int num, int time);

int main(){
    fast_io;

    cin >> n >> k;
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        line1[i] = c - '0';
        visited1[i] = false;
    }

    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        line2[i] = c - '0';
        visited2[i] = false;
    }

    cout << solve(0, 0, 0);

    return 0;
}

int solve(int l, int num, int time){
    if(time > num){ return 0; }
    else if(num+k >= n) return 1;

    if(l){
        visited2[num] = true;
        if(!visited1[num+k] && line1[num+k]){
            if(solve(!l, num+k, time+1)) return 1;
        }
        if(!visited2[num-1] && line2[num-1] && num-1 >= time+1){
            if(solve(l, num-1, time+1)) return 1;
        }
        if(!visited2[num+1] && line2[num+1]){
            if(solve(l, num+1, time+1)) return 1;
        }
    }
    else{
        visited1[num] = true;
        if(!visited2[num+k] && line2[num+k]){
            if(solve(!l, num+k, time+1)) return 1;
        }
        if(!visited1[num-1] && line1[num-1] && num-1 >= time+1){
            if(solve(l, num-1, time+1)) return 1;
        }
        if(!visited1[num+1] && line1[num+1]){
            if(solve(l, num+1, time+1)) return 1;
        }
    }

    //cout << time << " " << num << endl;
    return 0;

}