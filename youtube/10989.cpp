#include <stdio.h>

int main(){
    int i,n,tmp;
    int countings[10000]={0,};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&tmp);
        countings[tmp-1]++;
    }
    for(i=0,tmp=0;i<n;){
        if(countings[tmp]){
            printf("%d\n",tmp+1);
            countings[tmp]--;
            i++;
        }else{
            tmp++;
        }
    }
    return 0;
}

/*
    틀린이유들
    1-1. 메모리 관리 : 그냥 vector로 하나씩 삽입하였더니, 메모리 제한이 생겼다.
    1-2. 그래서 array 로 했더니, 컴파일이 되지 않았다. 이건 왜그런거??

    2. counting sort로 해보려고 한다.

    참고
    문제조건 견적을 어떻게 알 수 있을까?
*/