#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first != b.first ? a.first<b.first : a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    pair<int,int> arr[n+1];
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i]=make_pair(x,y);
    }
    sort(arr,arr+n,cmp);
    for(int i=0;i<n;i++){
        cout << arr[i].first << " " << arr[i].second << "\n";
    }
    return 0;
}

/*
 * 내 코드
 * pair<int,int> 배열으로 입력을 받고, cmp 함수를 만들어 구현
 * cmp 따로 구현할 필요 없을 듯
 * 
 * 다른 사람 코드1
 * fread, fwrite로 in/out 함수 구현하여 입출력 속도 올림
 * cmp 따로 구현안하고 바로 sort, sort함수가 알아서 첫번째 원소로 비교후, 두번째 원소로 비교 하는것으로 보인다.
*/