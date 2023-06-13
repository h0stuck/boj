#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, a, b, max = -2000000, min = 2000000, maxa, maxb, mina, minb;
    int max2 = -2000000, min2 = 2000000, maxa2, maxb2, mina2, minb2;
    scanf("%d", &n);
    if(n == 1){
        printf("0");
        return 0;
    }

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        if(a - b > max){
            maxa = a; maxb = b;
            max = a - b;
        }
        else if(a - b < min){
            mina = a; minb = b;
            min = a - b;
        }

        if(a + b > max2){
            maxa2 = a; maxb2 = b;
            max2 = a + b;
        }
        else if(a + b < min2){
            mina2 = a; minb2 = b;
            min2 = a + b;
        }
    }
    int result = (abs(maxa - mina) + abs(maxb - minb) > abs(maxa2 - mina2) + abs(maxb2 - minb2)) ?
                 abs(maxa - mina) + abs(maxb - minb) : abs(maxa2 - mina2) + abs(maxb2 - minb2);

    printf("%d", result);

    return 0;

}