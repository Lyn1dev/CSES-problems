#include <iostream>

int main() {
    long long n{}; // didnt realise i had to make it long long to avoid overflow for large numbers, once i did that i got 16/16 test cases
    std::cin >> n;
    std::cout << n << " ";
    while (n != 1) { 
        if (n % 2 == 0) {
            n = n / 2;
            std::cout << n << " ";
        } else {
            n = (n * 3) + 1;
            std::cout << n << " ";
        } 
    }  
    return 0;
}
