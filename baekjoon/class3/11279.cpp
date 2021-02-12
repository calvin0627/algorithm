#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    priority_queue<int,vector<int>,less<int>> q;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x==0){
            if(q.size()==0){
                cout << "0\n";
            }
            else{
                cout << q.top() << "\n";
                q.pop();
            }
        }
        else{
            q.push(x);
        }
    }
    return 0;
}

/*
 * 코드
 * max heap은 prioirty queue로 구현할 수 있으므로, <queue> 라이브러리의 prioirty_queue를 사용하였다.
*/