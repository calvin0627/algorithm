#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    if(a.length()==b.length()){
        return a<b;
    }
    else{
        return a.length()<b.length();
    }
}

int main(){
    int i;
    int n;
    cin >> n;
    string words[n];
    string tmp;
    for(i=0;i<n;i++){
        cin >> words[i];
    }
    sort(words,words+n,cmp);
    for(i=0;i<n;i++){
        if(i>0 && words[i-1]==words[i]){
            continue;
        }
        cout << words[i] << "\n";
        tmp=words[i];
    }
    return 0;
}