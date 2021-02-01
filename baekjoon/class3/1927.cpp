#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, tmp, size=0;
    priority_queue<int,vector<int>, greater<int>> q;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> tmp;
        if(tmp==0){
            if(q.size()>0){
                cout << q.top() << "\n";
                q.pop();
            }
            else{
                cout << "0\n";
            }
        }
        else if(tmp > 0){
            q.push(tmp);
        }
    }
    return 0;
}

/*
 * 코드
 * 1. queue 라이브러리에서 우선순위 큐를 통해 힙을 구현하였다. size를 통해 힙이 비어있는지를 확인 하고 출력하도록 했다.
 * 
*/