#include<stdio.h>
#include<algorithm>

#define MAX 1001

using namespace std;

int main(){
    int n, sol=0;
    int times[MAX];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&times[i]);
    }
    sort(times,times+n);
    for(int i=n;i>0;i--){
        sol+=i*times[n-i];
    }
    printf("%d",sol);
    return 0;
}

/*
 * 코드
 * 기다리는 시간의 총 합은 어떤 사람이 쓰는 시간 * 남아있는 사람의 수 의 총 합이므로, 남아있는 사람이 많을 때, 짧은 시간을 써야 한다. 
 * 따라서 올림차순으로 정렬후 계산하는 방식으로 구현하였다.
 */