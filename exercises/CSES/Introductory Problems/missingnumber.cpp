#include <iostream>
#include <vector>

int main() {

    long long n {};
    std::cin >> n;

    std::vector<bool> list(n); 
    for(long long i{}; i < n-1; ++i) {

        long long current_number{};
        std::cin >> current_number;
        list[current_number - 1] = true;
    }

    for(long long i{}; i < n; ++i) {
        if (list[i] == false) {
            std::cout << i + 1;
            break;
        }
    }

    // or you could calculate the expected sum n*(n+1)/2 and then subtract the expected sum with a sum of what you're given 
    //with a loop
    //for(int i{}; i < n - 1; ++i) {
        //long long current_number;
        //std::cin >> current_number;
        
        // The += operator adds the right side to the left side
        //actual_sum += current_number; 
    //}
    // and then print expected sum - actual sum and thatll give it to you
    // this way with simple addition is just much more efficient too
}
