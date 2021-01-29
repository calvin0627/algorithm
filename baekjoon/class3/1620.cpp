#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int N, M;
    cin >> N >> M;
    string pokemons[N+1];
    unordered_map<string,int> map;
    for(int i=1;i<=N;i++){
        cin >> pokemons[i];
        map[pokemons[i]]=i;
    }
    string tmp;
    for(int i=0;i<M;i++){
        cin >> tmp;
        if(tmp[0]-'0'>=0 && tmp[0]-'0'<=9){
            cout << pokemons[std::stoi(tmp)] << "\n";
        }
        else{
            cout << map[tmp] << "\n";
        }
    }
    return 0;
}

/*
 * 코드
 * 숫자에서 이름 출력은 string 배열(char 이차원 배열도 될듯)으로
 * 이름에서 숫자 출력은 unordered_map(hash)<string,int> 로 찾을 수 있도록 구현
*/