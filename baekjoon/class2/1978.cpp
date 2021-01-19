#include<stdio.h>

bool isPrime(int n){
    if(n<=1)return false;
    bool nums[n+1];
    for(int i=1;i<=n;i++)nums[i]=true;
    for(int i=2;i*i<=n;i++){
        if(nums[i]){
            for(int j=i+i;j<=n;j+=i)nums[j]=false;
        }
    }
    return nums[n];
}

int main(){
    int n,tmp,cnt=0;
    scanf("%d",&n);
    while(n-->0){
        scanf("%d",&tmp);
        if(isPrime(tmp))cnt++;
    }
    printf("%d",cnt);
}

/*
 *
 * 내 코드
 * 에라토스테네스의 체 방식으로 진행, 배수 제거시 +i로 제곱근까지만 계산하는것은, i*i<=n으로 표현
 * 
 * 참고코드
 * 에라토스테네스의 체가 아니라 그냥 %통해 대입. 문제 견적에 따라 달라지는듯
 * 
 * 
*/