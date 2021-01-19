#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string num="1";
    bool check;
    while(true){
        cin >> num;
        if(num[0]=='0')break;
        check = true;
        for(int i=0;check&&i<num.length()/2;i++){
            check=num[i]==num[num.length()-i-1];
        }
        cout << (check?"yes":"no") << endl;
    }
    return 0;
}

/*
 * 참고코드1
 * 1. string이 아니라 int로 한 자리씩 계산하여, 순서가 반대인 int를 만들고, 비교한다.
 * k:=input, i:=뒤집힌 int, j:=tmp;
 * while(j){
 *  i*=10; i+=j%10; j/=10;
 * }
 * 
 * 참고코드2
 * 1. char array로 input을 받고 strlen()으로 길이를 구하여
 * 시작점, 마지막점부터 1씩 이동하며 비교한다.
 * l=0;, r=strlen(word)-1;
 * while(l<=r){
 *  if(word[l++]!=word[r--]) cond = false;
 * }
*/