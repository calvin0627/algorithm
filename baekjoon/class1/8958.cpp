#include <iostream>
using namespace std;

int main(){
    int n;
    int i,j;
    int cnt;
    int score=0;

    string str;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> str;
        for(j=0,cnt=0,score=0;j<str.length();j++){
            if(str[j]=='O')cnt++;
            else cnt=0;
            score+=cnt;
        }
        cout << score << endl;
    }
    return 0;
}