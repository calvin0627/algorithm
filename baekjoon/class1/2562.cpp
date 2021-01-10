#include<iostream>

int main(){
    int max=0;
    int idx_max=0;
    int input_;

    for(int i=0;i<9;i++){
        std::cin >> input_;
        if (input_ > max){
            max = input_;
            idx_max = i+1;
        }
    }
    std::cout << max << std::endl;
    std::cout << idx_max << std::endl;
    return 0;
}