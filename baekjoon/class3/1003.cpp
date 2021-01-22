#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,max_val=0;
    cin >> n;
    int tcs[n+1];

    for(int i=0;i<n;i++){
        cin >> tcs[i];
        if(tcs[i]>max_val)max_val=tcs[i];
    }

    pair<int,int> fib_vals[max_val+1];
    fib_vals[0].first=1,fib_vals[0].second=0;
    fib_vals[1].first=0,fib_vals[1].second=1;
    for(int i=2;i<=max_val;i++){
        fib_vals[i].first=fib_vals[i-1].first+fib_vals[i-2].first;
        fib_vals[i].second=fib_vals[i-1].second+fib_vals[i-2].second;
    }

    for(int i=0;i<n;i++){
        cout << fib_vals[tcs[i]].first << " " << fib_vals[tcs[i]].second << endl;
    }
}
