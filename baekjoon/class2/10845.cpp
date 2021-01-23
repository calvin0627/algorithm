#include<stdio.h>
#include<cstring>
#include<queue>
using namespace std;
int main(){
    int n, tmp;
    char command[6];
    scanf("%d",&n);
    queue<int> q;
    for(int i=0;i<n;i++){
        scanf("%s",command);
        if(strcmp(command,"push")==0){
            scanf("%d",&tmp);
            q.push(tmp);
        }
        else if(strcmp(command,"pop")==0){
            if(q.empty()){
                printf("-1\n");
                continue;
            }
            tmp = q.front();
            q.pop();
            printf("%d\n",tmp);
        }
        else if(strcmp(command,"size")==0){
            printf("%d\n",q.size());
        }
        else if(strcmp(command,"empty")==0){
            printf("%d\n",q.empty());
        }
        else if(strcmp(command,"front")==0){
            printf("%d\n",q.empty()?-1:q.front());
        }
        else if(strcmp(command,"back")==0){
            printf("%d\n",q.empty()?-1:q.back());
        }
    }
    return 0;
}