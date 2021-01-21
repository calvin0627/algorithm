#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=0;i<n;i++)cin >> arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)cout << arr[i] << "\n";
    return 0;
}

/*
 * 내코드
 * cout << arr[i] << endl로 제출했을때는, 시간초과가 발생하고
 * cout << arr[i] << "\m"로 제출하니 성공했다. 
 * 
 * 참고코드
 * in과, out 직접 구현하여 입출력의 시간 오버헤드를 줄인듯 하다.
 * i) in namespace를 구현하여, stdin 스트림에 fread()로 접근해서 getchar()를 나타내어 readint를 구현
 * ii) out namespace를 만들어, stdout 스트림에 fwrite()로 접근하여 putc()를 나타애어 writeint를 구현하였다.
*/