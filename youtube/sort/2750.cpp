#include<iostream>
using namespace std;

void quick(int* arr,int start, int end){
    if(start>=end)return;
    int i,j,tmp;
    int k = start;
    for(i=start+1,j=end;i<=j;){
        while(arr[k]>=arr[i])i++;
        while(arr[k]<=arr[j] && j>start)j--;
        if(i>j){
            tmp = arr[j];
            arr[j]=arr[k];
            arr[k]=tmp;
        }
        else{
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    quick(arr,start,j-1);
    quick(arr,j+1,end);
}

int main(){
    int n,i,j,tmp;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    quick(arr,0,n-1);
    for(i=0;i<n;i++)
        cout << arr[i] << "\n";
    return 0;
}