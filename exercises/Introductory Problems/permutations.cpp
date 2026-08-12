#include <iostream>


int main() {


    long long n{};
    std::cin >> n;

    if (n==1){
        std::cout << n;
    }
    else if (n <= 3){
        std::cout << "NO SOLUTION";
    }
    else if (n >= 4){
        for(long long i{2}; i <= n; i+=2){
            std::cout << i << " ";
        }
        for(long long i{1}; i <= n; i+=2){
            std::cout << i << " ";
        }

        
    }



}
