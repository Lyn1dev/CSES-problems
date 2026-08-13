#include <iostream>
#include <string>
#include <vector>

int main(){

//
//     // calculate a factorial
//     long long f{};
//     std::cin >> f;
//     long long result{1};
//     for (long long i{1}; i <= f; ++i){
//         result *= i;
//     }
//     // turn the factorial into a string
//     std::string factorial = std::to_string(result);
//     // reverse the string
//     std::vector<char> reversed{};
//     long long n{factorial.length()};
//     for (long long j = n-1; j >= 0; --j){
//         reversed.push_back(factorial[j]);
//     }
//     // check first next next chars for 0s and break when ur out of zeros
//     long long numberZeros {};
//     for(long long i{0}; i <= n-1; ++i) {
//         if (reversed[i] == '0') {
//             numberZeros = numberZeros+1;
//         }
//         else {
//             break;
//         }
//     }
//     // print number of zeros
//     std::cout << numberZeros;

// that was fucking stupid

    long long f{};
    std::cin >> f;

    long long totalZeros{};

    // The math hack
    while (f >= 5) {
        f /= 5;
        totalZeros += f;
    }

    std::cout << totalZeros << "\n"; // my brain hurtsssss
}
