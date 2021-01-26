#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

// 0 1
// 2 3
inline pair<int,int> getQuarter(pair<int,int> key, pair<int,int> start, int quarterLen){
    int quarterX = 0, quarterY = 0;
    if(key.first >= start.first + quarterLen)quarterX++;
    if(key.second >= start.second + quarterLen)quarterY++;
    return make_pair(quarterX,quarterY);
}

inline pair<int,int> updateUpperLeft(pair<int,int> origin, pair<int,int> coordinate, int Len){
    return make_pair(origin.first+Len*coordinate.first,origin.second+Len*coordinate.second);
}
inline pair<int,int> updateLowerRight(pair<int,int> upperLeft, int Len){
    return make_pair(upperLeft.first+Len,upperLeft.second+Len);
}

int main(){
    int N, r, c;
    int count = 0;
    cin >> N >> r >> c;
    pair<int, int> key = make_pair(r, c);
    pair<int, int> upperLeft = make_pair(0,0), lowerRight = make_pair((1 << N), (1 << N));
    while(upperLeft!=key){
        int len = lowerRight.first - upperLeft.first;
        int quarterLen = len / 2;
        int quarterSize = quarterLen * quarterLen;
        pair<int, int> coordinate = getQuarter(key, upperLeft, quarterLen);
        count += (2*coordinate.first + coordinate.second)*quarterSize;
        upperLeft = updateUpperLeft(upperLeft, coordinate, quarterLen);
        lowerRight = updateLowerRight(upperLeft, quarterLen);
    }
    cout << count;
    return 0;
}

/*
 * 내코드
 * 입력 값 key가 사각형의 어느 사분면에 있는 지 확인하고, 그 만큼 count하는 방식으로 구현하였다. loop안에서 좌상부터 count를 시작하므로, 좌상의 좌표가 key의 위치로 갈때 loop를 종료 하도록 하였다. 
 * 
 * 다른 사람 코드
 * 재귀함수로 구현
 * fun()
 * if(len==1)return 0;
 * len /= 2
 * int k = 2*((row / len)>0) + ((col / len) > 0);
 * return (len*len)*k + fun(len, row % len, col % len);
 * k는 지나온 사분면들을 계산 하고, 그 만큼 리턴값에 카운트 시킨다음, 재귀함수로 나머지 연산을 통해 구한 해당 사분면 안에서의 상대 좌표로 다시 계산하도록 한다.
 * 
*/