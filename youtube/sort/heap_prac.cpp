#include<iostream>
#include<vector>

using namespace std;

/*
 * 힙은 최솟값이나 최대값을 빠르게 찾기 위해 완전 이진 트리를 기반으로 하는 트리
 * 모든 tree, subtree의 root는 자식들 보다 크거나, 작거나 해야된다.(기준에 따라)
 * 힙 정렬 : 데이터 -(heapify)-> 힙 구조 -> ...
 * 
 */

int main(){
    int n = 9;
    int arr[9] = { 7,6,5,8,3,5,9,1,6};
    //heapify all trees
    for(int i=1;i<n;i++){
        int c = i;
        // one heapify
        do{
            int root = (c-1) / 2;
            if(arr[root] < arr[c]){
                int tmp = arr[root];
                arr[root]=arr[c];
                arr[c]=tmp;
            }
            c= root;
        }while(c!=0);
    }
    // sort
    for(int i=n-1;i>=0;i--){
        int tmp = arr[0];
        arr[0]=arr[i];
        arr[i] = tmp;
        int root = 0;
        int c =1;
        do{
            c = 2*root +1;
            // 자식중 더 큰 값 찾기
            if(c < i-1 && arr[c] < arr[c+1]){
                c++;
            }
            if(c < i && arr[root] < arr[c]){
                int tmp = arr[root];
                arr[root] = arr[c];
                arr[c] = tmp; 
            }
            root=c;
        }while(c<i);
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << ' ';
    return 0;
}