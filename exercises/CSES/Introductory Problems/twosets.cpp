#include <iostream>
#include <vector>

int main (){

    long long n{};
    std::cin >> n;
    std::vector<long long> list1;
    std::vector<long long> list2;

    if (n*(n+1)/2 % 2 == 0){     // to split into two sets of equal sum, sum of all numbers upto n must be even
        // logic
        long long targetSum {n*(n+1)/4};
        for(long long i{n}; i > 0; --i) {

            if (i <= targetSum) {
                list1.push_back(i);
                targetSum = targetSum - i;       // first greedy algorithm yippie?
            }
            else {
                list2.push_back(i);
            }

        }
        std::cout << "YES\n" << list1.size() << "\n";
        for (long long i{}; i < list1.size(); ++i){
            std::cout << list1[i] << " ";
        }
        std::cout << "\n" << list2.size() << "\n";
        for (long long i{}; i < list2.size(); ++i){
            std::cout << list2[i] << " ";
        }
    }
    else {
        std::cout << "NO";
    }
    
    

}
