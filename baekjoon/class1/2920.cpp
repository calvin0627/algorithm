#include<iostream>
#include<vector>
using namespace std;

// 음계

int main(){
    vector<int> v;
    int i,tmp;
    for(i=0;i<8;i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    /*
        0: ascending, 1: descending, 2:mixed
    */
    int scale=2;
    if(v[0]==8)scale=1;
    else if (v[0]==1)scale=0;
    tmp =v[0];
    for(i=1;i<8;i++){
        if(scale == 0 && tmp+1!=v[i]){
            scale=2;
        }
        else if(scale == 1 && tmp-1!=v[i]){
            scale=2;
        }
        tmp = v[i];
    }

    if(scale==0)cout << "ascending\n";
    else if (scale==1)cout << "descending\n";
    else cout << "mixed\n";

    return 0;
}

/*
 * 참고코드
 * input을 받는 루프안에서, asending,descending,mixed도 판볗
 * input 값의 범위가 1~8인 정수라 가능한 듯
 * 
 * for (int i = 0; i < 8; i++)
 *{
 *   cin >> ryt[i];
 *
 *    if (ryt[i] == i + 1)
 *    asc++;
 *
 *    else if (ryt[i] == 8 - i)
 *    des++;
 *
 *}
 * 
*/