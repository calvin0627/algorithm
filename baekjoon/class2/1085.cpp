#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;
    cout << min({x,y,w-x,h-y});
    return 0;
}

/*
 * 참고
 * 1. min에 3개이상의 값넣기, {a,b,c} 통해 arr의 형식으로 보낸다.
*/