#include<stdio.h>
#include<cstring>
#include <set>
#include <vector>
#include <iostream>

using namespace std;
int main(){
    int m, num;
    char cmd[7];
    set<int> s;
    set<int>::iterator isIn;
    bool ischanged = true;
    scanf("%d",&m);
    while(m--){
        scanf("%s",cmd);
        if(strcmp(cmd,"add")==0){
            scanf("%d",&num);
            isIn = s.find(num);
            if(isIn!=s.end())continue;
            s.insert(num);
            ischanged = true;
        }
        else if(strcmp(cmd,"remove")==0){
            scanf("%d",&num);
            auto isIn = s.find(num);
            if(isIn!=s.end()){
                s.erase(num);
            }
            ischanged = true;
        }
        else if(strcmp(cmd,"check")==0){
            scanf("%d",&num);
            isIn = s.find(num);
            if(isIn!=s.end()){
                printf("1\n");
            }
            else{
                printf("0\n");
            }
        }
        else if(strcmp(cmd,"toggle")==0){
            scanf("%d",&num);
            isIn = s.find(num);
            if(isIn!=s.end()){
                s.erase(num);
            }
            else{
                s.insert(num);
            }
            ischanged = true;
        }
        else if(strcmp(cmd,"all")==0){
            if(ischanged)
                s = set<int>({1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20});
            ischanged = false;
        }
        else if(strcmp(cmd,"empty")==0){
            s = set<int>();
            ischanged=true;
        }
    }
    return 0;
}

/*
 * 코드
 * set 라이브러리로 구현하였다. 시간 초과가 계속나서, 보니, all부분만 계속 들어온다면, 시간초과가 난다고 하여, 그냥, bool ischanged를 만들어 억지로 넘어가도록 하였다.
 * 
 * 
*/