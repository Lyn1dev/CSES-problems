#include <iostream>
#include <vector>
#include <string>

int main() {

    std::string u{};
    std::cin >> u;
    std::vector<int> letters(256, 0); // Give me an array with exactly 256 slots in it. These are my 256 buckets. Please put the number 0 inside every single bucket so they all start completely empty.

    std::size_t n {u.length()};
    for(std::size_t i{}; i<n; ++i ){
        //Under the hood, C++ uses something called ASCII. It doesn't see the letter 'A'; it sees the integer 65. It sees 'B' as 66, 'C' as 67, and so on.
        letters[u[i]]++; // go to bucket number [whichever int that letter is] and add 1 to the count
    }

    long long oddCount{};

    for (int i{}; i < 256; ++i) {
    if (letters[i] % 2 != 0) { // If the tally inside the bucket is odd
        oddCount++;
        }
    }
    if (oddCount > 1) {
    std::cout << "NO SOLUTION\n";
    }
    else if (oddCount == 1) {

    char middleChar {}; // get the middle letter by finding the odd one, and since this is inside oddcount = 1 check itll only do this if the oddcount = 1

    for (int i{}; i < 256; ++i) {
    if (letters[i] % 2 != 0) { 
        middleChar = (char)i; 
    }
    }
    for (int i{}; i < 256; ++i) {
    
    long long halfTally = letters[i] / 2; // so like we're going by each letter in the tally and 
                                          // i = the letter // letters[i] = how many letters is stored in there 

    for (long long j{}; j < halfTally; ++j) {           // basically print the letter half of how much is stored
        std::cout << (char)i; 
    } }

    std::cout << middleChar; // print the middle letter 

    for (int i{255}; i >= 0; --i) {
    
    long long halfTally = letters[i] / 2; // so like we're going by each letter in the tally and 
                                          // i = the letter // letters[i] = how many letters is stored in there 

    for (long long j{}; j < halfTally; ++j) {           // basically print the letter half of how much is stored
        std::cout << (char)i; 
    }

    }





}
else if (oddCount == 0) {

    for (int i{}; i < 256; ++i) {
    
    long long halfTally = letters[i] / 2; // so like we're going by each letter in the tally and 
                                          // i = the letter // letters[i] = how many letters is stored in there 

    for (long long j{}; j < halfTally; ++j) {           // basically print the letter half of how much is stored
        std::cout << (char)i; 
    } }

    

    for (int i{255}; i >= 0; --i) {
    
    long long halfTally = letters[i] / 2; // so like we're going by each letter in the tally and 
                                          // i = the letter // letters[i] = how many letters is stored in there 

    for (long long j{}; j < halfTally; ++j) {           // basically print the letter half of how much is stored
        std::cout << (char)i; 
    }

    }




}
}

