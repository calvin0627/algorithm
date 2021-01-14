#include<iostream>
using namespace std;
/*
 * 범위조건이 있는 경우 계수 정렬 가장 빠르다. 크기 기준으로 갯수 센다.
 * O(n)
*/
int main(){
    int tmp,i,j;
    int bottom, top;
    int len = 30;
    int arr[30] = {1, 3, 2, 4, 3, 2, 5, 3, 1, 2,
                   3, 4, 4, 3, 5, 1, 2, 3, 5, 2,
                   3, 1, 4, 3, 5, 1, 2, 1, 1, 1};
    // cin >> bottom >> top;
    bottom =1;
    top = 5;
    int countings[top-bottom+1]={0,};
    for(i=0;i<len;i++){
        countings[arr[i]-1]+=1;
    }
    for(i=0;i<5;i++){
        if(countings[i]!=0){
            for(j=0;j<countings[i];j++)
                cout << i+1 << ' ';
        }
    }
    return 0;
}