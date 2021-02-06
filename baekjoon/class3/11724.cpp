#include<stdio.h>
#include<vector>

using namespace std;

vector<int> graph[1001];
bool visited[1001];

void DFS(int n){
    visited[n]=true;
    for(int i=0;i<graph[n].size();i++){
        if(!visited[graph[n][i]]){
            DFS(graph[n][i]);
        }
    }
}

int main(){
    int n,m;
    int u, v;
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%d %d",&u,&v);
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int sol = 0;
    for(int i = 1;i<=n;i++){
        if(!visited[i]){
            DFS(i);
            sol++;
        }
    }
    printf("%d",sol);
    return 0;
}
