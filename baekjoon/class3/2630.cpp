#include<stdio.h>
#include<vector>

#define BLACK 1
#define WHITE 0

using namespace std;

bool board[1<<7][1<<7];
// half-open [x1,x2)
int number(bool color, int x1, int y1, int x2, int y2){
    if(x2-x1==1){
        if(board[x1][y1]==color)return 1;
        else return 0;
    }
    bool one=true;
    for(int i=x1;i<x2;i++){
        for(int j=y1;j<y2;j++){
            if(board[i][j]==!color){
                one = false;
                break;
            }
        }
    }
    if(one){
        return 1;
    }
    else{
        int size = (x2-x1)/2;
        int b1, b2, b3, b4;
        b1 = number(color,x1,y1,x1+size,y1+size);
        b2 = number(color,x1+size,y1,x1+size*2,y1+size);
        b3 = number(color,x1,y1+size,x1+size,y1+size*2);
        b4 = number(color,x1+size,y1+size,x2,y2);
        return b1+b2+b3+b4;
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&board[i][j]);
        }
    }
    printf("%d\n",number(WHITE,0,0,n,n));
    printf("%d\n",number(BLACK,0,0,n,n));
    return 0;
}

/*
 * 코드
 * 문제에 주어진 대로, 주어진 보드를 4등분하여, 재귀함수로 구현 하였다. 각각의 영역은 좌상의 좌표 x1,y1 우하의 좌표x2,y2로 나타내었다.
 * 처음에는 1로 이루어진 사각형의 크기만 구하면 되는 줄 알고, 함수를 짰다가, 0으로 된 것을 표현하기 위해서, 그냥 함수를 두번 돌리도록 하였다.
 * 
 * 다른 사람의 코드
 * a) 영역을 좌상의 좌표, 변의길이 3개의 변수로 나타내었다.
 * b) 전역변수 w_cnt, b_cnt 두개를 만들어, 함수 한번을 실행시키면서, 두개를 한번에 계산하였다.
 * c) 4가지로 나누어진 영역을 구할때, 나열하는게 아니라, 루프로 표현하였다.
 * for(int i=0;i<2;i++){
 *  for(int j=0;j<2;j++){
 *      fun(row+i*(size/2),col+j*(size/2),size/2);
 *  }
 * }
 * d) 좌표를 x,y 가 아니라 row, col로 표현하였다. 이차원 배열에서 arr[y축][x축]의 느낌이라 헷갈릴 수 있는데, row, col로 표현하는게 좋을 것 같다.
*/