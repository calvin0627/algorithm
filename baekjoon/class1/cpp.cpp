#include <iostream>
using namespace std;

int main(){
    char irum[20];
    cout << "input";
    // cin >> irum;
    cin.getline(irum,sizeof(irum));
    cout << "Hello World\n" << irum;
    return 0;
} 