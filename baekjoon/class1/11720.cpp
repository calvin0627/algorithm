#include<iostream>
using namespace std;
int main(){
    int n,i=0,sum=0;
    cin >> n;
    char arr[n];
    cin >> arr;
    while(*(arr+i)){
        sum+=*(arr+i)-'0';
        i++;
    }
    cout << sum;
    return 0;
}

/*
 * 참고
 * 1. scanf("%1d",&c); 이면 한자리씩 input 받는듯
 * 2. cin >> c(char); 이면 한자리씩 char로 받는듯
*/