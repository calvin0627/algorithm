#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<pair<int,int>,string>&a, pair<pair<int,int>,string>&b){
    if(a.first.second==b.first.second)return a.first.first < b.first.first;
    return (a.first.second < b.first.second);
}

int main(){
    int n;
    cin >> n;
    vector<pair<pair<int,int>,string>> member;
    for(int i=0;i<n;i++){
        int tmp;
        string stmp;
        cin >> tmp >> stmp;
        member.push_back(make_pair(make_pair(i,tmp),stmp));
    }
    sort(member.begin(),member.end(),cmp);
    for(int i=0;i<n;i++)
        cout << member[i].first.second << " " << member[i].second << "\n";
    return 0;
}

/*
 * 내 코드
 * 1)구현:pair<pair<int,int>,string> vector를 생성하여 입력을 순서,나이,이름으로 받고
 * 문제 조건에 맞춰 cmp를 구현하여 algorithm 라이브러리의 sort에서 사용한다. 
 * 2)의문: 정렬시 원래 처음부터, 들어온 순서대로 되어 있을텐데, 왜 그냥 정렬을 하면 실패? 정렬 방식에 따른 테스트케이스 있는건가?
 * 
 * 
 * 다른 코드2
 * 아마도 counting sort 방식으로 구현한 것으로 보인다.
 * 이름만을 저장하는 vector<string> acc[INF]를 만들고
 * age를 인덱스로 하여 acc[age]에 있는 벡터에 이름을 queue형태로 넣는다.
 * 그 후 출력시에는 
 * for(int i = 1; i < INF; i++)
        for(auto iter = accounts[i].begin(), ed = accounts[i].end(); iter != ed; iter++)
            cout << i << ' ' << *iter << '\n';
 * 와 같이 출력한다.
 * 
 * 다른 코드3 counting sort
 * 나이의 범위가 있으므로 int age[200] = {0}; 으로 해당 인덱스에 있는 인풋의 수를 저장하는 배열을, char arr[200][1000][101];으로 인풋 배열을 만들고,
 * scanf("%d %s",&a, tmp, 101); strcpy(arr[a][arr[a]++], temp)로 값을 넣는다
 * age[i]의 값이 0이상이면, 인덱스가 a인 값인 인풋이 age[i]개 많큼 있는 것으로 볼 수 있다.
*/