#include<stdio.h>
#include<cstring>

int main(){
    int n, tmp;
    scanf("%d",&n);
    int arr[2*n+1];
    char cmd[11];
    int front = n; 
    int back = n;
    for(int i=0;i<n;i++){
        scanf("%s",cmd);
        if(strcmp(cmd,"push_front")==0){
            scanf("%d",&tmp);
            arr[front--]=tmp;
        }
        else if(strcmp(cmd,"push_back")==0){
            scanf("%d",&tmp);
            arr[++back]=tmp;
        }
        else if(strcmp(cmd,"pop_front")==0){
            printf("%d\n",front<back?arr[++front]:-1);
        }
        else if(strcmp(cmd,"pop_back")==0){
            printf("%d\n",front<back?arr[back--]:-1);
        }
        else if(strcmp(cmd,"size")==0){
            printf("%d\n",back-front);
        }
        else if(strcmp(cmd,"empty")==0){
            printf("%d\n",front>=back);
        }
        else if(strcmp(cmd,"front")==0){
            printf("%d\n",front<back?arr[front+1]:-1);
        }
        else if(strcmp(cmd,"back")==0){
            printf("%d\n",front<back?arr[back]:-1);
        }
    }
}