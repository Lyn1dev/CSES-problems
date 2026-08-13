#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(){

    long long n{};
    std::cin >> n;

    std::vector<std::string> list = {"0", "1"};
//    std::vector<std::string> rlist = list;
//    std::reverse(rlist.begin(), rlist.end()); // literally reverses a vector list isnt that convenient? 
                                              // .begin() is the first character, .end is one past the end character and is defined as the boundary
                                              // so with begin and end you can reverse specific parts of a string
                                              // std::reverse(s.begin() + 1, s.begin() + 4); would print hlleo if s was hello!
                                              // std::reverse(s.begin(), s.end() -1); would print lleho the o stays same cuz it was defined as the boundary
for (int i{}; i< n-1; ++i) {
    std::vector<std::string> rlist = list;
    std::reverse(rlist.begin(), rlist.end()); // we put this inside the loop cuz we need a new rlist every time we add a new thing to the list so when the first
                                              // loop is done, we have a list of 00, 01, 11, 10, now we add a 0 and a 1 to the start of each of those again add them back


    for (int i{}; i < list.size(); ++i) { // adding 0 to each item in the list
        list[i] = "0" + list[i]; 
    }
    for (int i{}; i < rlist.size(); ++i) { // adding 1 to each item in the rlist
        rlist[i] = "1" + rlist[i]; 
    }
    for (int i{}; i < rlist.size(); ++i){ // adding each item in rlist to list
        list.push_back(rlist[i]);
    }
}
    // and now list would be looking lke {"00", "01", "11", "10"} cuz list and rlist sizes were only 2 i will hit 1 and end
    for (int i{}; i < list.size(); ++i) {
        std::cout << list[i] << "\n";
    }


//        long long y{1};
//        for (long long i{1}; i <= n; ++i){ // formula copied from my bitstrings code
//        y =(y*2); 
//        }

//        for (long long i{}; i < y; ++i){ // this will loop until all y amount of bitstring combinations are printed

//        }

}
