#include<stdio.h>
#include<vector>
#include<iostream>

#define size 8

using namespace std;

int check(vector<string> brd,int x,int y){
    int cnt1=0,cnt2=0;
    int i,j;
    char piv = 'W',tmp;
    for(i=0;i<size;i++){
        tmp = piv;
        for(j=0;j<size;j++){
            if(piv==brd[x+i][y+j])cnt1++;
            piv = piv=='W'?'B':'W';
        }
        piv = tmp=='W'?'B':'W';
    }
    piv = 'B';
    for(i=0;i<size;i++){
        tmp = piv;
        for(j=0;j<size;j++){
            if(piv==brd[x+i][y+j])cnt2++;
            piv = piv=='W'?'B':'W';
        }
        piv = tmp=='W'?'B':'W';
    }
    return cnt1<cnt2?cnt1:cnt2;
}

int main(){
    int n,m;
    int i,j,tmp,min_change;
    cin >> n >> m;
    vector<string> v;
    string row;
    for(i=0;i<n;i++){
        cin >> row;
        v.push_back(row);
    }
    min_change=64;
    for(i=0;i<=n-size;i++){
        for(j=0;j<=m-size;j++){
           tmp = check(v,i,j);
           if(min_change>tmp){min_change=tmp;}
        }
    }
    cout << min_change << endl;
    return 0;
}

/*
 * 참고코드
 * 1. bool brd[52][52] 로 보드생성
 * 
 * 2. getchar() == 'W' 통해 t,f로 보드 값들 생성(1bit 이므로 1,0)
 * 	for(int i = 0; i < n; i++)
 *		for(int j = 0; j <= m; j++)
 *			a[i][j] = getchar() == 'W';
 *
 * 3. cnt시 한번의 루프로 보드값들에 접근에서 (i+j)%2로 보드 패턴 나타냄
 * 	for(int i = y; i < y + 8; i++)
 *		for(int j = x; j < x + 8; j++)
 *			w += (i + j) % 2 == a[i][j],
 *			b += (i + j) % 2 != a[i][j];
 * 
*/