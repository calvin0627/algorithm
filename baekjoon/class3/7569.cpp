#include <stdio.h>
#include <vector>
#include <queue>
#include <tuple>
#include <iostream>

using namespace std;
bool boxes[101][101][101];
queue<tuple<int,int,int>> riped;
int n,m,h;
int remains;

inline void update(tuple<int,int,int> position){
    int i = get<0>(position), j = get<1>(position), k = get<2>(position);
    if(i+1< h && boxes[i+1][j][k]==0){
        remains--;
        boxes[i+1][j][k]=1;
        riped.push(make_tuple(i+1,j,k));
    }
    if(i-1>=0 && boxes[i-1][j][k]==0){
        remains--;
        boxes[i-1][j][k]=1;
        riped.push(make_tuple(i-1,j,k));
    }
    if(j+1< n && boxes[i][j+1][k]==0){
        remains--;
        boxes[i][j+1][k]=1;
        riped.push(make_tuple(i,j+1,k));
    }
    if(j-1>=0 && boxes[i][j-1][k]==0){
        remains--;
        boxes[i][j-1][k]=1;
        riped.push(make_tuple(i,j-1,k));
    }
    if(k+1< m && boxes[i][j][k+1]==0){
        remains--;
        boxes[i][j][k+1]=1;
        riped.push(make_tuple(i,j,k+1));
    }
    if(k-1>=0 && boxes[i][j][k-1]==0){
        remains--;
        boxes[i][j][k-1]=1;
        riped.push(make_tuple(i,j,k-1));
    }
}


int main(){
    scanf("%d %d %d",&m,&n,&h);
    remains = n*m*h;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++)
            for(int k=0;k<m;k++){
            int tmp;
            scanf("%d",&tmp);
            if(tmp==1){
                tuple<int,int,int> tup = make_tuple(i,j,k);
                riped.push(tup);
                remains--;
            }
            else if(tmp==-1){
                remains--;
            }
            boxes[i][j][k]=tmp;
        }
    }
    int count = 0;
    while(remains){
        int pre_remains = remains;
        int len = riped.size();
        for(int x=0;x<len;x++){
            tuple<int,int,int> tup = riped.front();
            update(tup);
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
 * 7576의 코드를 상당부분 차용하여 사용하였다. queue를 이용하여 bfs방식으로 update를 시켰다.
*/