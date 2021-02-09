#include <stdio.h>

int n;
int stairs[10001];
int sol[10001];

int main(){
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&stairs[i]);
    }

    sol[1] = stairs[1];
    sol[2] = stairs[1] + stairs[2];
    sol[3] = stairs[1] + stairs[3] > stairs[2] + stairs[3] ? stairs[1] + stairs[3]:stairs[2] + stairs[3];
    for(int i=4;i<=n;i++){
        sol[i] = (sol[i-2] + stairs[i] > sol[i-3] + stairs[i-1] + stairs[i]) ? sol[i-2] + stairs[i]: sol[i-3] + stairs[i-1] + stairs[i];
    }

    printf("%d",sol[n]);
    return 0;
}