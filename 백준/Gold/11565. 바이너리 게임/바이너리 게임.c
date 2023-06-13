#include<stdio.h>
#include<string.h>
int main(){
    char a[9999], b[9999];
    int q = 0, w = 0;
    scanf("%s %s", a, b);
    for(int i=0; i<strlen(a); i++){
        if(a[i] == '1')
            q++;
    }
    if(q%2 == 1)
        q++;
    
    for(int i=0; i<strlen(b); i++){
        if(b[i] == '1')
            w++;
    }
    
    if(q >= w)
        printf("VICTORY");
    else
        printf("DEFEAT");
    
    return 0;
}