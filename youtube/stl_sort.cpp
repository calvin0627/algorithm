#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool cmp(pair<string,pair<int, int>> a,
        pair<string,pair<int, int>> b){
    if(a.second.first == b.second.first){
        return a.second.second < b.second.second;
    }else{
        return a.second.first < b.second.first;
    }
}

bool cmp_reverse(int a, int b){
    return a > b;
}

class Student {
public:
    string name;
    int score;
    Student(string name, int score){
        this->name=name;
        this->score=score;
    }
    bool operator <(Student &st){
        return this->score < st.score;
    }
};

int main(){
    vector<pair<string,pair<int, int>>> v;
    // v.push_back(pair<string,pair<int, int>>("dasf",pair<int,int>(32,19970627)));
    v.push_back(pair<string,pair<int, int>>("qwdsa",pair<int,int>(43,19950101)));
    // v.push_back(pair<string,pair<int, int>>("dsxx",pair<int,int>(531,19920627)));
    v.push_back(pair<string,pair<int, int>>("qeee",pair<int,int>(43,19950101)));

    sort(v.begin(),v.end(),cmp);

    for(int i=0;i<v.size();i++){
        cout << v[i].first << ' ';
    }


    return 0;
}