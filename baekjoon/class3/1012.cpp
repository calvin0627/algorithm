#include<iostream>
#include<vector>
using namespace std;

int n, m, k;
bool farm[51][51];
bool visited[51][51];
pair<int,int> direction[4] = {make_pair(1,0),make_pair(-1,0),make_pair(0,1),make_pair(0,-1)};

void check(int r, int c){
    int newr, newc;
    visited[r][c] = 1;
    for(int i=0; i<4; i++){
        newr = r + direction[i].first, newc = c + direction[i].second;
        if(((newr >= 0) && (newr<n)) && ((newc >= 0) && (newc <m))){
            if((visited[newr][newc] == 0) && (farm[newr][newc])==1){
                check(newr, newc);
            }
        }
    }
}

int main(){
    int t;
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> m >> n >> k;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                farm[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        for(int j=0;j<k;j++){
            int r, c;
            cin >> c >> r;
            farm[r][c] = 1;
        }

        int count = 0;
        for(int i=0;i<n; i++){
            for(int j=0;j<m; j++){
                if(farm[i][j] && visited[i][j]==0){
                    check(i,j);
                    count+=1;
                }
            }
        }
        cout << count << "\n";
    }

    return 0;
}