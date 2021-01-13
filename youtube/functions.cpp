#include <iostream>
using namespace std;


void show(int *arr,int start, int end){
    int i;
    for(i=start;i<=end;i++)
        cout << arr[i] << " ";
    cout << "\n";
}