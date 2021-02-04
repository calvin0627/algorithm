#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num, pairs, a, b;
    cin >> num;
    cin >> pairs;
    vector<int> vertexes[num+2];
    bool computers[num+2];
    for(int i=1;i<=num;i++){computers[i]=0;}
    
    for(int i=0;i<pairs;i++){
        cin >> a >> b;
        vertexes[a].push_back(b);
        vertexes[b].push_back(a);
    }
    bool visited[num+2];
    for(int i=1;i<=num;i++){visited[i]=0;}
    queue<int> q;
    q.push(1);
    while(q.size()>0){
        int current = q.front();
        q.pop();
        for(int i=0;~visited[current] && i<vertexes[current].size();i++){
            int next = vertexes[current][i];
            if(!visited[next]){
                computers[next]=1;
                q.push(next);
            }
        }
        visited[current]=true;
    }

    int count = 0;
    for(int i=2;i<=num;i++){
        if(computers[i]==1){
            count++;
        }
    }
    cout << count;
    return 0;
}

/*
 * vertex들을 vector를 통해 입력받아서, 그래프 표현하여 q를 통해 파싱 하도록 하였다. visited 배열을 통해 똑같은 노드를 중복하여 파싱하지 않도록 방지하였다.
 * 처음에는 계속 틀렸는데, 아마도 if문에 조건으로, if(~visited)파싱;이런식으로 표현했는데, bool 부정 연산자를 !이 아니라 ~로 착각하여 사용하여, 계속 무한 루프에 빠진 것이었다.
 * 
*/