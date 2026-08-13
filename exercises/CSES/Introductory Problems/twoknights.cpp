#include <iostream>

int main (){
    long long n{};
    std::cin >> n;
    long long y{-2};
    long long m{};

    for(long long i{1}; i<=n; ++i){
        
        y += 1; 
        m = (y*(y+1))/2; // for i = 3 youll see y = 1, i = 4, y = 2
                             // and when y = 1 m = 1, y = 2, m = 3
        
        // total possible places
        long long numberOfMoves{};
        if (i < 3){
        // for a given example (3x3) 8 possible attacking positioons given answer 28 so is it just i*i-1 no its not that simple
        // the number of places = total possible places - places they can attack eachother on
        // total possible places = n for horse 1 and then n-1 foor horse two
        // N(N-1)/2
            numberOfMoves = (i*i*((i*i)-1))/2;
        }
        else if (i >= 3) {

            numberOfMoves =  (i*i*((i*i)-1))/2 -8*m; 
            
        }



        std::cout << numberOfMoves << "\n";
    }
}

// holy shit this worked?
    