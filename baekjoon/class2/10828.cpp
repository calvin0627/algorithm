#include<stdio.h>
#include<cstring>
int main(){
    int n, tmp;
    char command[6];
    scanf("%d",&n);
    int stck[n+1];
    int idx =0;
    for(int i=0;i<n;i++){
        scanf("%s",command);
        if(strcmp(command,"push")==0){
            scanf("%d",&tmp);
            stck[idx++]=tmp;
        }
        else if(strcmp(command,"pop")==0){
            printf("%d\n",idx==0?-1:stck[--idx]);
        }
        else if(strcmp(command,"size")==0){
            printf("%d\n",idx);
        }
        else if(strcmp(command,"empty")==0){
            printf("%d\n",idx==0?1:0);
        }
        else if(strcmp(command,"top")==0){
            printf("%d\n",idx==0?-1:stck[idx-1]);
        }
    }
    return 0;
}