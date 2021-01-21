#include<queue>
#include<iostream>
using namespace std;

int main(){
    queue<int> q;
    int n,tmp;
    cin >> n;
    for(int i=1;i<=n;i++)q.push(i);
    while(q.size()>1){
        q.pop();
        tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.front() << "\n";
    return 0;
}

/*
 * 내 코드
 * <queue> lib의 queue<int> 를 통해 FIFO 방식으로 push, pop을 하는 자료구조 사용하여 문제의 조건대로 동작하도록 구현
 *
 * 참고코드1
 * queue가 아니라 규칙 정리한듯 증명가능???
 * x = 2^([log2(n)]+1)
 * x==n ? n : 2*n - x 
*/