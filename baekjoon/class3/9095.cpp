#include <stdio.h>

int num_of_cases(int n){
    int sol[5]={0,1,2,4,7};
    if(n<=4){
        return sol[n];
    }
    else{
        return num_of_cases(n-1)+num_of_cases(n-2)+num_of_cases(n-3);
    }
}

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n;
        scanf("%d",&n);
        printf("%d\n",num_of_cases(n));
    }
    return 0;
}

/*
 * 코드
 * n 은 n-1의 패턴에 1을 추가한 패턴, n-2의 패턴에 2를 추가한 패넡, n-3의 패턴에 3을 추가한 패턴으로 나타낼 수 있다. 따라서 이 점화식을 재귀함수로 표현하였다.
 * 
 * 다른 사람코드
 * 코드 길이를 줄이기 위해 for문이 아니라, while(t--){}의 꼴로 표현 하였다.
*/