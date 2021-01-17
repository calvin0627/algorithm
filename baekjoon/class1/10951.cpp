// // 1 : scanf 반환값(==입력받은 값 개수)통해
// #include <stdio.h>
// int main(){
//     int a,b;
//     while(scanf("%d %d",&a,&b)==2){
//         printf("%d\n",a+b);
//     }
//     return 0;
// }
// // 2 cin.eof() 사용
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     while(true){
//         cin >> a >> b;
//         if(cin.eof() == true)break;

//         cout << a+b <<"\n";
//     }
//     return 0;
// }

//3 scanf() EOF와 직접비교
#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d\n",a+b);
    }
}