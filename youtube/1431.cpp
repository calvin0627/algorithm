#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string str1,string str2){
    int i,j;
    int cnt1=0, cnt2=0;
    if(str1.length()==str2.length()){
        for(i=0;i<str1.length();i++){
            if(str1[i]>=48 && str1[i]<=57)
                cnt1+=str1[i]-48;
            if(str2[i]>=48 && str2[i]<=57)
                cnt2+=str2[i]-48;  
        }
        if(cnt1==cnt2){
            return str1<str2;
        }
        else{
            return cnt1 < cnt2;
        }
    }
    else{
        return str1.length()<str2.length();
    }
}

int main(){
    int i;
    int n;
    cin >> n;
    string serials[n];
    for(i=0;i<n;i++)cin >> serials[i];
    sort(serials,serials+n,cmp);
    for(i=0;i<n;i++)cout << serials[i] << "\n";
    
    return 0;
}

/*
    참고
    
    1.시리얼 번호의 숫자합을 구하는 함수 int getSum(string serial);을 따로 만든다.
    함수의 모듈화 관점에서 좋은것 같다.
    
    2. #include <vector>를 통해서 array 길이를 직접 만들때 정하지 말고, v.push_back(in)을 통해 하나씩 넣는다.
*/