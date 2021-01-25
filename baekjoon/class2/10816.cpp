// hsh map
#include<iostream>
#include<algorithm>
#include<unordered_map> // hash
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    int tmp;
    unordered_map <int, int> map;
    cin >> n;
    for(int i=0;i< n;i++){
        cin >> tmp;
        map[tmp]++;
    }
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> tmp;
        cout << map[tmp] << " ";
    }
    return 0;
}

// binary search
#include<iostream>
#include<algorithm>

using namespace std;

int lower_bound(int* arr, int key, int len){
    int mid, start = 0, end = len -1;

    while(end > start){
        mid = (start + end) / 2;
        if(arr[mid] >= key)end = mid;
        else start = mid + 1;
    }
    return end;
}
int upper_bound(int* arr, int key, int len){
    int mid, start = 0, end = len -1;

    while(end > start){
        mid = (start + end) / 2;
        if(arr[mid] > key) end =mid;
        else start = mid + 1;
    }
    return end;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m, tmp, key;
    cin >> n;
    int *cards = new int[n];
    for(int i=0;i<n;i++)cin >> *(cards+i);
    sort(cards,cards+n);

    cin >> m;
    int *keys = new int[m];
    int *sol = new int[m];
    for(int i=0;i<m;i++){
        cin >> *(keys+i);
        sol[i]=0;
    }
    int lower, upper;
    for(int i=0;i<m;i++){
        lower = lower_bound(cards, keys[i], n);
        upper = upper_bound(cards, keys[i], n);
        if(upper == n-1 && cards[n-1] == keys[i])upper++;
        sol[i] = upper - lower;
    }

    for(int i=0;i<m;i++)cout << sol[i] << " ";

    return 0;
}

/*
 * 코드
 * 1) 처음에 int arr로 counting arr를 만들려고 했는데 stack크기 리미트에 걸린듯 하다.
 * char arr 최대크기 1,000,000
 * int arr 최대크기 250,000
 * vector push_back 최대크기 1,000,000,000
 * 1-2) 그래서 vector로 구현하니 100%까지 갔다가, outofbound런타임 에러가 떴다.
 * 
 * binay search 구현
 * 주어진 input들을 정렬 후, upper, lower binary search로 정렬된 상태에서 주어진 값의 연속된 범위로, 주어진 값의 개수를 구한다.
 * 
 * hash 구현
 * 입력들을 hash map에 넣어서 입력을 인덱스로 value를 count로 매핑되도록 하여 바로 출력시킨다.
 * 
*/

/*
 * 실패코드1
 *  #include<stdio.h>
    #include<vector>
    using namespace std;
    int main(){
    int n, m;
    int tmp;
    vector<int> plus_indexes(10000001);
    vector<int> minus_indexes(10000001);
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&tmp);
        tmp>=0?plus_indexes[tmp]++:minus_indexes[tmp]++;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&tmp);
        printf("%d ",tmp>=0?plus_indexes[tmp]:minus_indexes[tmp]);
    }
    return 0;
}
*/