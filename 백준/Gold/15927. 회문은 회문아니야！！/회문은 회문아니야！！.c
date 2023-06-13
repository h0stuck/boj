#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char arr[500001];
    scanf("%s", arr);

    int l = strlen(arr);

    int result = 0, same = 0;
    for(int i=1; i<=l/2; i++){
        if(arr[i - 1] != arr[l-i]){
            result = l;
            break;
        }
    }

    for(int i=0; i<l; i++){
        if(arr[i-1] == arr[i]) { same++; }
    }

    //printf("%d %d ", same, strlen(arr));
    if(result == 1 || same + 1 == l)
        result = -1;
    else if(result == 0)
        result = strlen(arr) - 1;

    printf("%d", result);

    return 0;
}