#include<iostream>
using namespace std;

int euclid_gcd(int a, int b){
    int remainder = a%b;
    while(remainder!=0){
        a = b;
        b = remainder;
        remainder = a % b;
    }
    return b;
}

int main(){
    int a,b;
    cin >> a >> b;
    
    int gcd = a>b?euclid_gcd(a,b):euclid_gcd(b,a);
    int lcm = a*b/gcd;
    cout << gcd << endl << lcm;

    return 0;
}

/*
 * 내 코드
 * 유클리드 호제법을 while문을 통하여 구현해서, 최대공약수를 구하고 이를 사용하여 최소 공배수 계산
 * 유클리드 호제법 : a와 b의 최대 공약수 == b, a%b(!=0)의 최대 공약수
 * 
 * 참고코드
 * 유클리드 호제법 재귀함수로 구현
 * gcd(a,b) = b ? (gcd(b,a%b)):(a)
*/