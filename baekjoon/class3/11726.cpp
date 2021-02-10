#include <stdio.h>

int main(){
    int sol[10001]={0,1,2,}, n;
    scanf("%d",&n);
    for(int i=3;i<=n;i++){
        sol[i] = (sol[i-1] + sol[i-2]) % 10007;
    }
    printf("%d\n",sol[n]);
    return 0;
}

/*
 * 코드
 * 실수 : dp로 구현하고 제출했는데 계속 틀려서, 보니 오버 플로우가 나서 그랬다. long long int로 바꾸어도 오버 플러우가 나서, 그냥 중간에 10007으로 나누면서 진행하였다.
*/