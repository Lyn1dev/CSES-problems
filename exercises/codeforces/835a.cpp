#include <iostream>

// info
// s = number of characters in the text
// v1 and v2 = typing speeds of participant 1 and participant 2 // here v is PER CHARACTER
// t1 and t1 = pings of each

int main(){

    int s{}, v1{}, v2{}, t1{}, t2{};
    std::cin >> s >> v1 >> v2 >> t1 >> t2;

    int successtime1{v1*s+2*t1}, successtime2{v2*s+2*t2};
    if (successtime1 > successtime2){
        std::cout << "Second";
    }
    else if (successtime1 < successtime2){
        std::cout << "First";
    }
    else if (successtime1 = successtime2){
        std::cout << "Friendship";
    }

}
