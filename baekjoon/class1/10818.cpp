#include<iostream>

using namespace std;

int main(){
    int n, tmp;
    cin >> n;
    int min = +1000001, max = -1000001;
    for(int i=0;i<n;i++){
        cin >> tmp;
        if(tmp < min)min = tmp;
        if(tmp > max)max = tmp;
    };
    cout << min << " " << max;
    return 0;
}

/*
 * 주의
 * 1. n=1 인 경우 생각
 * 
 * 참고 코드 a
 * ios::sync_with_stdio(0); 
 * cin.tie(0); 
 * cout.tie(0); 로 입출력 속도 빠르게
 * 
 * 
 * 참고 코드 b(hard)
 * 1. 큰수 1e6, 등으로 표현. 소수는 1e-3이런식으로 가능할 듯
 * 2. char*c=(char*)mmap(0,z[12],1,2,0,fstat(0,(struct stat*)z));
 * z : struct stat : 12 
 * i) addr : 0
 * ii) len : z[12] fstat통한 파일정보중 파일 size?? 일듯
 * iii) prot: 1
 * iv) flags: 2 
 * v) offset: 0 fstat(): 파일 정보 가져옴
 * 
 * fstat(0,z)
 * i) 0 : fd==0 -> stdin 입력의 크기
 * ii) z : 파일 정보 저장할 공간  
 * 
 * 3. 삼항 연산자 최소 최대 min = min>new ? new : min
 * 
 * 4. string형태의 값(c) int로 변환
 * N = 0;
 * do N=N*10+*c-'0';while(*++c>='0');
 * ++c; // 공백이나 \n으로 나누어진 다음 input으로 가기 위해 사용하는듯?
*/