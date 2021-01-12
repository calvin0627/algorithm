#include <stdio.h>

void selection(int* arr){
    int i,j,min,idx,tmp;

    for(i=0;i<10;i++){
        min = 9999;
        for(j=i;j<10;j++){
            if(min > arr[j]){
                min = arr[j];
                idx=j;
            }
        }
        tmp =arr[idx];
        arr[idx]=arr[i];
        arr[i]=tmp;
    }
}

void bubble(int *arr){
    int i, j, tmp;
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}

void insert(int* arr){
    int i,j,tmp;
    for(i=0;i<10-1;i++){
        j=i;
        while(j>=0 && arr[j]>arr[j+1]){
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=tmp;
            j--;
        }
    }
}

int main(){
    int i , j, min_, idx, tmp;
    int arr[10]={ 1, 10, 5,8,7,6,4,3,2,9};
    insert(arr);
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

}