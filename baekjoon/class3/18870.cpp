#include<stdio.h>
#include<vector>
#include<unordered_map>
#include<algorithm>

#define MAX 1000000

using namespace std;

int arr[MAX];

int main(){
    int n, tmp;
    vector<int> sorted_arr;
    scanf("%d",&n);
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sorted_arr.push_back(arr[i]);
    }
    sort(sorted_arr.begin(),sorted_arr.end());
    sorted_arr.erase(unique(sorted_arr.begin(),sorted_arr.end()),sorted_arr.end());
    unordered_map<int,int> map;
    for(int i=0;i<sorted_arr.size();i++){
        map[sorted_arr[i]]=i;
    }
    for(int i=0;i<n;i++){
        printf("%d ",map[arr[i]]);
    }
    return 0;
}

/*
 * 코드
 * 인풋 배열을 원본 배열, 정렬할 벡터(중복 제거 위해) 두개로 입력받고, 벡터를 정렬후, 중복 제거하여, 총 수를 구한다. 그 후, map함수로, 각각을 짝지어, 원래 배열을 순서대로 움직이면서 mapped 된 값들을 출력한다
 * 실수: 처음에는 그냥 set에 값을 넣어서 자동으로 정렬, 중복 제거를 하려고 했는데, 시간초과가 발생했다. 아마도, set inert가 시간 복잡도가 큰것 같다.
 * 
 * 다른 사람 코드
 * a) 배열을 두개 만든게 아니라, 구조체로 나타내어, 원래 위치와 값을 한번에 표현하였다.
 * struct Data {int key, idx;} arr[MAX];
 * b) key로 배열을 정렬후, 중복되지 않도록 하나씩 다른 답 배열의 idx의 위치로 이동시킨다.
 * sol[arr[0].idx] = 0; // 시작
 * for(int i=1;i<n;i++){
 *  if(arr[i].key != arr[i-1].key)pos++;
 *  sol[arr[i].idx] = pos;
 * }
 * 
*/

// 참고 구현 
// 시간 988 -> 452
// #include <stdio.h>
// #include <algorithm>
// using namespace std;

// int sol[1000001];
// struct Data { int key, idx; } arr[1000003];

// int main()
// {
// 	int n, tmp;
//     scanf("%d",&n);
//     int count=0;
//     for(int i=0;i<n;i++){
//         scanf("%d",&tmp);
//         arr[i].key=tmp, arr[i].idx = i;
//     }
// 	sort(arr, arr + n, [](Data &p, Data &q) { return p.key < q.key;});

// 	sol[arr[0].idx] = 0;
// 	for (int i = 1, pos=0; i < n; i++) {
// 		if (arr[i].key != arr[i-1].key) pos++;
// 		sol[arr[i].idx] = pos;
// 	}

// 	for(int i=0;i<n;i++){
//         printf("%d ",sol[i]);
//     }
// 	return 0;
// }