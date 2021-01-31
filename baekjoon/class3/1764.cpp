#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N,M,count =0;
    string tmp;
    set<string> unseen;
    set<string> unheard;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        cin >> tmp;
        unseen.insert(tmp);
    }
    for(int i=0;i<M;i++){
        cin >> tmp;
        unheard.insert(tmp);
    }
    vector<string> sol;
    set_intersection(unseen.begin(),unseen.end(),unheard.begin(),unheard.end(),std::back_inserter(sol));
    cout << sol.size() << "\n";
    for(auto i=sol.begin();i!=sol.end();i++){
        cout << *i << "\n";
    }
    return 0;
}

/*
 * 코드
 * set 라이브러리의 set 자료구조를 사용하여, 입력과 동시에, 값들을 정렬시키고, set_intersection 함수를 통해 교집합을 구했다.
 * 실수
 * i) 처음에는 char이차원배열로 받고, 정렬하고, 나머지는 해시로 중복을 표시하려다가, 크기가 너무 커져서 stackoverflow가 일어났다. 그 후 vector로 하려다가, 찾아보니 set이 가장 적절한 것 같아서 사용했다.
 * ii) set_intersection을 사용하는데, 마지막 인자를 어떻게 넣어야 할지 몰라서 헤멨다.
 * 
 * 다른 사람 코드
 * 1. N,에서 해시맵을 만들고, M 인풋에서 똑같은 해시함수로 해시값을 만들어내어, binary search로 중복되는지 확인하였다. 그후 sort하여 정렬된 상태로 출력하였다
*/