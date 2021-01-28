#include <algorithm>
#include <queue>
#include <iostream>

using namespace std;
#define MAX 1001

int G[MAX][MAX];
bool visited[MAX] = {0};
int N, M, V;

void parser_dfs(int node);
void parser_bfs(int node);

int main(){
    cin >> N >> M >> V;
    int x,y;
    for(int i =0;i<M;i++){
        cin >> x >> y;
        G[x][y] = G[y][x] = 1;
    }
    parser_dfs(V);
    cout << "\n";
    parser_bfs(V);
    return 0;
}

void parser_dfs(int V){
    cout << V << " ";
    visited[V] = true;
    for(int i=1;i<=N;i++){
        if(visited[i] || G[V][i]==0)continue;
        parser_dfs(i);
    }
}

void parser_bfs(int V){
    queue<int> q;
    q.push(V);
    visited[V]=0;
    while(!q.empty()){
        V = q.front();
        q.pop();
        cout << V << " ";
        for(int i=1;i<=N;i++){
            if(G[V][i]==0||visited[i]==0)continue;
            q.push(i);
            visited[i] = 0;
        }
    }
}

/*
 * 그래프는 이차원 배열을 통해 표현하고, 재귀함수로 dfs, bfs parser를 구현
 *  
*/