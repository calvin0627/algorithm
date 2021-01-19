#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int* arr,int start,int end){
    int i;
    for(i=start;i<=end;i++){
        printf("%d ",arr[i]);
    }
    puts("");
}

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

/*
    원소를 순서대로 1개씩 정렬되는 위치에 넣는다.
*/
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

/*

*/
void quick(int* arr,int start,int end){
    if(start>=end){
        return;
    }
    int i,j,k,small_cnt;
    int result[end-start+1];
    int piv=arr[start];
    int cnt=0;
    for(i=start+1,j=0,k=0;i<=end;i++){
        cnt++;
        if(piv>arr[i])result[j++]=arr[i];
        else result[end-start-k++]=arr[i];
    }
    result[j]=piv;
    for(i=start;i<=end;i++){
        arr[i]=result[i-start];
        arr[i]=result[i-start];
    }
    quick(arr,start,start+j-1);
    quick(arr,end-(k-1),end);
}

void quick2(int* arr,int start, int end){
    if(start>=end)return;

    int piv = start; // 1st element
    int i = start+1, j=end, tmp; // i:= left idx, j:= right idx, tmp for swap

    while(i<=j){ // i==j 일때 array 모두 돌았다.
        while(arr[piv]>=arr[i])i++;
        while(arr[piv]<=arr[j] && j > start)j--; // piv와 왼쪽값 j를 idx로 하는 값의 위치를 바꿀것이기 때문
        if(i>j){ // 엇갈린 경우 -> piv 를 기준 위치로
            tmp = arr[j];
            arr[j]=arr[piv];
            arr[piv]=tmp;
        }
        else{ // 엇갈린 경우x => arr[i]:piv보다 크지만 왼쪽, arr[j]: piv보다 작지만 오른쪽 => 서로 위치바꿈
            tmp = arr[j];
            arr[j]=arr[i];
            arr[i]=tmp;
        }
    }
    // j-th loc <- piv value
    quick2(arr, start, j-1);
    quick2(arr, j+1 ,end);
}
int mergearr[10];
void merge(int*arr,int start,int mid,int end){
    int i=start, j=mid+1,k=start;
    while(i<=mid && j<=end){
        if(arr[i]<=arr[j])mergearr[k++]=arr[i++];
        else mergearr[k++]=arr[j++];
    }
    while(i<=mid)mergearr[k++]=arr[i++];
    while(j<=end)mergearr[k++]=arr[j++];
    for(int t=start;t<=end;t++)arr[t]=mergearr[t];
}
void mergeSort(int * arr, int start, int end){
    if(start<end){
        int mid =(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int i , j, min_, idx, tmp;
    int arr[10]={ 1, 10, 5,8,7,6,4,3,2,9};
    int arr2[10]={3,7,8,1,5,9,6,10,7,4};
    mergeSort(arr,0,9);
    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

}