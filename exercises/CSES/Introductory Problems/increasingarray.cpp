#include <iostream> 
#include <vector>

int main() {

    long long n{};
    std::cin >> n; // size of array
    std::vector<long long> list(n);
    long long number_moves{};

    for(long long i{}; i < n; ++i){
        long long first{};
        std::cin >> first; // i see the variable here created extra confusion when i couldve done std::cin >> list[i];
        list[i] = first;
            // now we've saved the array as a list
        }
    
    for(long long i{1}; i < n; ++i){ // we are starting at the second and comparing the second to the previous and soo on
        if (list[i] < list[i-1]){ // we want to see if current number < previous
            long long x{};
            x = list[i-1] - list[i];
            list[i] = list[i] +x;         // updating the number itself to make sure its comparing the right number
            number_moves = number_moves + x; // isnt there shorthand for this? number_moves += x;
        }
    }
    std::cout << number_moves;
}

