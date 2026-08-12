#include <iostream>

int main(){

    long long t{};
    std::cin >>  t;

    for(long long i{}; i < t; ++i){
        long long one{}, two{};
        std::cin >> one >> two; 

        long long answer{};

        // each layer has an odd total number of squares 1 3 5 7 9 
        long long z{std::max(one,two)};
        if (z % 2 == 0) {
            answer = (z*z)-((two-1)+(z-one));
        }
        else {
            answer = (z*z)-((one-1)+(z-two));
            // z^2 is on z,1
        }
        // 1,2 is 4, 1,4 is 16
        // 1,1 is 1, 3,1 is 9, 4,1 is 25
        // the square where it turns the even squares are on y axis
        // odd squares are on x axis
        // the highest value of something in a layer is the max(one,two)^2 and the lowest value is ((max(one,two)-1)^2)+1
        // the logic to find out what is in the square (one, two)

        std::cout << answer << "\n";
    }


}
