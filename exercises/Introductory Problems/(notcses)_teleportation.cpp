#include <iostream>
#include <cstdio>

int main() { // i used standard io instead of file io, it expected to provide a paint.in and a paint.out file

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a{}, b{}, x{}, y{};
    std::cin >> a >> b >> x >> y;
    // x , y hold teleporters
    // a , b are start and end positions

    // option 1: he drives the tractor a to b
    int one{std::max(a,b)-std::min(a,b)};
    // option 2: he uses teleporter from x to y, so first goes from a to x then y to b
    int two{std::max(a,x)-std::min(a,x)+std::max(y,b)-std::min(y,b)};
    // option 3: he uses teleporter from y to x, so first goes from a to y then x to b
    int three{std::max(a,y)-std::min(a,y)+std::max(x,b)-std::min(x,b)};

    std::cout << std::min(std::min(one,two), three);


    return 0;
}
