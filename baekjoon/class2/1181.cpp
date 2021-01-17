#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(string a, string b){
    int al=a.length(),bl=b.length();
    if(al!=bl)return al<bl;
    return a < b;
}

int main(){
    int n;
    string word;
    cin >> n;
    string words[n+1];
    for(int i=0;i<n;i++){
        cin >> words[i];
    }
    sort(words,words+n,cmp);
    for(int i=0;i<n;){
        word = words[i];
        cout << word << endl;
        while(word==words[i])i++;
    }
    return 0;
}

/*
 * 참고코드
 * 람다표현식으로 cmp 함수 표현
 * 표현식 안에서 삼항연산자통해 표현
 * 정렬후 unique통해 중복제거후 루프로 결과 출력
 * N = unique(s, s + N) - s; // unique의 반환값은 s에서 중복된 값들을 밀어넣은 곳의 시작 주소일것이기 때문에, 
 *                           //원래의 주소 s를 빼면 중복된 값들의 시작 idx가 된다.
 * loop(i, N) cout << s[i] << '\n';
 * 
*/