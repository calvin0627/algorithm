#include<stdio.h>
#include<algorithm>

int main(){
    int n,m,tmp;
    scanf("%d",&n);
    int A[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&tmp);
        int* check = std::find(A,A+n,tmp);
        printf("%d\n",(check-A)!=n?1:0);
    }

    return 0;
}

/*
 * 참고코드1
 * i) int 입력함수를 getchar_unlocked()를 통해 직접 구현
 * ii) 입력함수를 inline 함수로 설정하여, 속도를 높임
 * iii) A 배열을 sort 후 binary search하여, 검색 속도를 높였다. log N
 *     문제 시간 조건의 크기를 보고 해야될듯. 
*/