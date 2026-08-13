#include <iostream>

int main(){

    long long n {};
    std::cin >> n;
    long long solved{}; // number of solved problems

    for(int i{}; i < n; ++i){
        int a{},b{},c{};
        std::cin >> a >> b >> c;
        if (a+b+c >= 2) {
            solved += 1; 
        }
    }
    std::cout << solved;

}
