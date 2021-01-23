#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int valid[n+1]={0};
    int size = n;
    cout << "<";
    for(int i=1;size>0;size--){
        int cnt =0;
        while(cnt < k){
            if(i==n+1)i=1;
            if(!valid[i++])cnt++;
        }
        valid[--i] = 1;
        cout << i << (size>1? ", " : ">\n");
    }
    return 0;
}

/*
 * 내 코드
 * 배열로 빈 자리, 사람 있는 자리 나타내어, 루프로 돌면서 출력
 * 
 * 다른 사람 코드
 * 큐 구현하여, 인덱스 이동시키면서 pop하여 출력
*/