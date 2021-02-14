#include <iostream>
#include <vector>

using namespace std;

int n;

bool friends[51][51];
bool visited[51];

void clear(){
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
}

int num_of_friends(int idx){
    visited[idx] = 1;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(!visited[i] && friends[idx][i]){
            visited[i] = 1;
            cnt ++;
            for(int j=0;j<n;j++){
                if(!visited[j] && friends[i][j] && (!friends[idx][j])){
                   visited[j] = 1;
                   cnt ++; 
                }
            }
        }
    }

    return cnt;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char c;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> c;
            if(c=='N'){
                friends[i][j] = 0;
            }
            else{
                friends[i][j] = 1;
            }
        }
    }
    int sol = -1;
    for(int i=0;i<n;i++){
        int num = num_of_friends(i);
        if(num > sol){
            sol = num;
        }
        clear();
    }
    cout << sol;
    return 0;
}