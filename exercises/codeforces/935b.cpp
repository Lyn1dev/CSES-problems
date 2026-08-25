#include <iostream>
#include <string>

int main(){

    using ll = long long;

    ll x{};
    std::string movement{};
    std::cin >> x >> movement;

    // x = number of movements
    // basically if he steps in a spot where x = y (x,y > 0) then he'll pay 1
    // >Note that if Fafa visits a gate without moving from one kingdom to another, he pays no silver coins.
    // simply landing on the gate doesnt mean +1, youd have to traverse the gate too
    // perhaps if he lands on a x=y then the next movement isnt matching the movement that landed him on x=y 
    // then it wont add to coinsPaid
    ll coinsPaid{};
    ll posX{}, posY{};

    for(ll i{}; i<x; ++i){
        if (movement[i] == 'U') {
            ++posY;
        }
        else if (movement[i] == 'R') { ++posX; }
        else {break;}

        if (posY == posX && movement[i] == movement[i+1]) { ++coinsPaid; }
    }
    std::cout << coinsPaid;
}
