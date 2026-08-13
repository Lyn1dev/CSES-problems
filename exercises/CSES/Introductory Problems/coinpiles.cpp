#include <iostream> 

int main() {

    long long t{};
    std::cin >> t;

    for (long long i{}; i<t; ++i){

        long long a{}, b{};
        std::cin >> a >> b;

        // every time the total coins on the board are going down by 3 and if it has to end with 0 coins on board then
        long long sum{a+b};
        // and a or b must be max 2:1 ratio so like
        // larger pile > smaller pile *2 has to be true 
        long long larger {std::max(a,b)};
        long long smaller {std::min(a,b)};  

        if (sum % 3 != 0) {
            std::cout << "NO\n";
        } 
        else if (larger > smaller * 2) { // a or b must be in a ratio where 2:1 is the max they can go if that makes sense?
            std::cout << "NO\n";         // listen so like it can be a 1:1.3 or a 1:1 btu it cant go higher than 1:2
        }                                // so if that isnt satisfied, it wont work 
        else {                           // like itll work if its 1:2 exactly, so we need to use > to make sure we're checking
            std::cout << "YES\n";        // when it wont work
        }

    }

}
