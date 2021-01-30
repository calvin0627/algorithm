#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, K;
    cin >> N >> K;
    if(N==K){
        cout << 0;
        return 0;
    }
    else if(K<N){
        cout << N-K;
        return 0;
    }
    int seconds[100001];
    for(int i=0;i<100001;i++)seconds[i]=100001;
    seconds[N]=0;
    for(int i=0;seconds[K]==100001;i++){
        for(int j=0;j<100001;j++){
            if(seconds[j]==i){
                if(j+1<=100000 && seconds[j+1]>i)seconds[j+1]=i+1;
                if(j-1>=0 && seconds[j-1]>i)seconds[j-1]=i+1;
                if(j*2<=100000 && seconds[j*2]>i)seconds[j*2]=i+1;
            }
        }
    }
    cout << seconds[K];
    return 0;
}

/*
 * 코드
 * 실수 : 
 * i)outof bound 에러를 생각하지 못했다.
 * ii)처음엔 간단히 벡터로 경로들을 추가하려다가 메모리 한도를 초과했다
 * 
 * 구현:
 * 일차원 배열을 search하면서 하나씩 경로들 까지의 이동을 표시하였다.
 * 
 * 다른 사람 코드
 * 각 위치를 나타내는 visted 배열을 만들고, queue를 통해 BFS로 위치를 이동시키며, 위치까지의 걸리는 시간을 업데이트 시킨다. 
*/