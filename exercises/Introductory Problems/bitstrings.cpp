#include <iostream>

int main(){

    long long n{};
    std::cin >> n;

    // this is definately highschool math that i dont remember

    // for every bit there are 2 options
    // number of options in a bit string = number of total options per bit *n - number of duplicate options 
    // number of total options per bit = 2*n 
    // now how do i find the number of duplicate options 

    // scrap that
    // each slot has two options, 1 slot = 2 option, n slots = 2*n options for a slot in 1 bit string
    // 2*n -    

    // fuck this im gonna bruteforce
    // for n = 1, y = 2 // n = 2 y = 4 // n = 3 y = 8 // these were given
    // ill count n = 4 y = 16
    // i literally listed all possible states and got 16
    // the 2, 4, 8, 16 just looks like y = 2^n
    long long y{1};
    for (long long i{1}; i <= n; ++i){

        y =(y*2) % 1000000007; // i dont know how i couldve done this without a loop ?
        // and then you add modulo cuz the result asked to print  modulo 10^9+7.
    }
    std::cout << y;



}
