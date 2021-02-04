#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;
int ware[1001][1001];
queue<pair<int,int>> riped;
int n,m;
int remains;

inline void update(pair<int,int> position){
    int i = position.first, j = position.second;
    if(i+1< n && ware[i+1][j]==0){
        remains--;
        ware[i+1][j]=1;
        riped.push(make_pair(i+1,j));
    }
    if(i-1>=0 && ware[i-1][j]==0){
        remains--;
        ware[i-1][j]=1;
        riped.push(make_pair(i-1,j));
    }
    if(j+1< m && ware[i][j+1]==0){
        remains--;
        ware[i][j+1]=1;
        riped.push(make_pair(i,j+1));
    }
    if(j-1>=0 && ware[i][j-1]==0){
        remains--;
        ware[i][j-1]=1;
        riped.push(make_pair(i,j-1));
    }
}


int main(){
    scanf("%d %d",&m,&n);
    remains = n*m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==1){
                riped.push(make_pair(i,j));
                remains--;
            }
            else if(tmp==-1){
                remains--;
            }
            ware[i][j]=tmp;
        }
    }
    int count = 0;
    while(remains>0){
        int pre_remains = remains;
        for(int x=0, len=riped.size();x<len;x++){
            pair<int,int> tmp = riped.front();
            update(tmp);
            riped.pop();
        }
        count++;
        if(pre_remains==remains){
            printf("-1\n");
            return 0;
        }
    }
    printf("%d\n",count);
    return 0;
}

/*
 * 코드
 * 이차원 배열에 입력을 받아서, 루프마다, 배열을 갱신 시키고, count를 증가시킨다. 배열이 모두 1이 되지 않았는데 갱신이 이루어 지지 않으면 -1을 출력하도록 하였다.
 * 실수 : n,m을 반대로 입력 받아서, 어려웠다.
 * 
 * 다른 사람 코드 참고,
 * a) 이동량을 int dx[4] = {1,-1,0,0}, dy[4] = {0,0,1,-1}; 와 같이 나타내는 것이 직관적으로 보인다.
 * b) 큐를 통해 파싱이 되었으므로, bfs 방식이라 한다.
 * c) count를 따로 나두는 게 아니라, 이차원 배열을 구조체로 만들어 배열 안에 나두는 사람도 있었다.
 * struct pos {
 *  int x; int y;
 *  int cnt; 
 * }
 * pos[1000001];
*/