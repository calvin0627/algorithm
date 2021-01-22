#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int h, w, n;
        scanf("%d %d %d",&h,&w,&n);
        int j;
        for(j=1;n>h;j++){
            n-= h;
        }
        printf("%d%02d\n",n,j);
    }
    return 0;
}

/*
 * 내코드
 * 1)실수 : 처음에 n>=h로 조건을 설정하여, 꼭대기 층을 0층으로 표시하게 되었다.
 * 
 * 참고코드
 * 빼기로 n,j를 구하는게 아니라, div, mod를 통해 바로 구한다.
 * n = (k - 1) % i + 1, j = (k - 1) / i + 1
*/