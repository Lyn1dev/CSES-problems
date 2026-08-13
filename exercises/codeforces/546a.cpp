#include <iostream>

int main() {

    long long costbanana{}, balance{}, wantbananas{};
    std::cin >> costbanana >> balance >> wantbananas;
    
    long long totalCost{};
    // total cost for wantbananas amount of bananas = 
    for (long long i{1}; i <= wantbananas; ++i){
        totalCost = totalCost + i*costbanana;        // long long totalCost = costbanana * (wantbananas * (wantbananas + 1) / 2); couldve done this 
                                                     // The formula to add up numbers from $1$ to $w$ is exactly w(w + 1)/2 
    }
    // total cost - balance = borrowed
    if (totalCost <= balance){
        std::cout << 0;
    }
    else {
        std::cout << totalCost-balance;
    }

}
