#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t, k;
    cin >> t;
    while(t--){
        char cmd;
        int val;
        cin >> k;
        set<pair<int,int>> q;
        int cnt = 0;
        while(k--){
            cin >> cmd >> val;
            if(cmd=='I'){
                q.insert(make_pair(val, cnt));
            }
            if(cmd=='D' && q.size() > 0){
                if(val == 1){
                    auto iter = q.end();
                    iter--;
                    q.erase(iter);
                }
                if(val == -1){
                    q.erase(q.begin());
                }
            }
            cnt++;
        }
        if(q.size()){
            int min_ = (*(q.begin())).first, max_ = (*(q.rbegin())).first;
            cout << max_ << " " << min_ << "\n";
        }
        else{
            cout << "EMPTY\n";
        }
    }
    return 0;
}

/*
 * 코드
 * set이 heap구조로 데이터를 저장하고, 또 min, max prioirty 둘 다 접근할 수 있어서, 사용하였다.
 * 처음에는 그냥 set<int> 로 값을 저장하였다가, 중복 값들이 제거되어서 pair<int,int>로 입력값들이 중복되지 않도록 구현하였다.
*/