#include<stdio.h>

int main(){
    int n, m;
    int min_diff=1410065407;
    int sol=1, sum;
    scanf("%d %d",&n, &m);
    int arr[n+1];
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    int i=0, j=1, k=1;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                sum = arr[i] + arr[j] + arr[k];
                if( m >= sum && m - sum < min_diff){
                    min_diff=m-sum;
                    sol = sum;
                }   
            }
        }
    }
    printf("%d\n",sol);
    return 0;
}

/*
 * 내 코드
 * for문을 통한 brute force로 하나하나씩 대입
 * i. 문제조건에서, m보다 작아야한다는 것을 잊어먹고
 * ii. m>=sum에서 =을 빼는 실수를 했다.
 * 
 * 참고코드
 * 1.for문을 매크로로 구현 : #define loop(i,n) for(int i=0;i<n;i++)
 * 이유가 있나?
 * 2. sum을 구할떄 한번에 더하는게 아니라 FILO 느낌으로 하나씩 더하고 빼는 방식으로 구현
*/