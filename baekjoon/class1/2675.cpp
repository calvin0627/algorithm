#include<iostream>
using namespace std;

int main(){
    int t,n;
    int i,j,k;
    string str;

    cin >> t;
    for(i=0;i<t;i++){
        cin >> n >> str;
        for(j=0;j<str.length();j++){
            k=n;
            while(k>0){
                cout << str[j];
                k--;
            }
        }
        cout << "\n";
    }

    return 0;
}