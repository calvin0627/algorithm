#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// void DFS_parser(int tree[][size],int branch, int size){
//     for(int i=0;i<size;i++)
//         if(tree[branch][i]){
//             printf("%d ",i);
//             DFS_parser(tree,i,size);
//         }
// }

// void BFS_parser(int tree[][size], int level, int size){
//     queue<int> q;

//     for(int i=0;i<size;i++)
//     for(int j=0;j<size;j++){
//         if(tree[i][j]){
//             printf("%d ",j);
//             q.push(i);
//         }
//     }
//     while(q){
//         int tmp = q.front();
//         q.pop();
//         BFS_parser(tree, level+1, size);
//     }
// }
#define MAX 1001
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, M, V;
    int x,y;
    cin >> N >> M >> V;
    bool arr[MAX][MAX];
    for(int i=0;i<M;i++){
            cin >> x >> y;
            arr[x][y] = 1;
    }

    // DFS_parser(arr,0,N);
    cout << V << " ";
    int count = M;
    int node = V;
    queue<int> q;
    q.push(V);
    while(!q.empty()){
        int tmp = q.front(); q.pop();
        for(int i=1;i<=N;i++){
            if(arr[tmp][i]){
                cout << i << " ";
                q.push(i);
            }
        }
    }
    cout << "\n";
    stack<int> stck;
    cout << V << " ";
    stck.push(V);
    while(!stck.empty()){
        int tmp = stck.top(); 
        stck.pop();
        for(int i=1;i<=N;i++){
            if(arr[tmp][i]){
                cout << i << " ";
                q.push(i);
            }
        }
    }

    return 0;
}