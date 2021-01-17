#include<stdio.h>

int main(){
    int a,b;
    do{
        scanf("%d %d",&a,&b);
        a!=0 ? printf("%d\n",a+b) : 0;
    }while(a!=0);
    return 0;
}

/*
 * 참고
 * 1. while 조건은 그냥 돌리고, 안에서 if로 빠져나가기 
 * 2. 억지로 while 조건문안에 종료 조건 넣기.  
*/