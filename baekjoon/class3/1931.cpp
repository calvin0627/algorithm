#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second)
        return a.first < b.first;
    return a.second < b.second;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N;
    int a, b;
    vector<pair<int,int>> conferences;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> a >> b;
        conferences.push_back(make_pair(a,b));
    }
    sort(conferences.begin(),conferences.end(),cmp);
    int count=0;
    int time=0;
    for(int i=0;i<conferences.size();i++){
        int start = conferences[i].first, end = conferences[i].second;
        if(start < time){
            continue;
        }
        else{
            time = end;
            count++;
        }
    }
    cout << count;
    return 0;
}

/*
 * 코드
 * 1). 회의가 끝나는 시간을 기준으로 정렬하여, 시간 겹치지 않는다면, count에 포함
 * 2). 7,7 5,7 같이 끝나는 시간이 겹치지만 다른 회의 시간을 가진 회의 들이 있다면, 7,7 5,7이 순서로 배열 된다면
 * 2개를 세어야 하지만, 1개만 세는 경우가 생긴다. 따라서, cmp조건에 first 비교도 하도록 해야된다.
 * 
 * 
*/