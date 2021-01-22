#include<stdio.h>
int main(){
    int n;
    char tmp[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",tmp);
        int stck = 0;
        for(int j=0;*(tmp+j) && stck>=0;j++){
            if(*(tmp+j)=='(')stck++;
            else if(*(tmp+j)==')')stck--;
        }
        printf(stck==0?"YES\n":"NO\n");
    }
    return 0;
}

/*
 * 내 코드
 * (이 들어오면 )이 나와야만 YES가 된다. 따라서 (을 스택의 push, )을 스택의 pop으로 생각하여 구현하였다.
*/