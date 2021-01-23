#include<iostream>

using namespace std;

int main(){
    int n, k, sol=1, div=1;
    cin >> n >> k;
    for(int i=n;i>n-k;i--){
        sol*=i;
    }
    for(int i=2;i<=k;i++){
        div*=i;
    }
    cout << sol/div;
    return 0;
}