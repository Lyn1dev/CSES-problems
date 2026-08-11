#include <iostream>
#include <cstdio>

int get_max(int x, int y) { // after looking at the solution i come to know this already exists as std::max
    if (x > y) {
        return x;
    } else { // this means x < y since thats the only other option
        return y;
    }
}

int get_min(int x, int y) { // after looking at the solution i come to know this already exists as std::min
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int main() { // i used standard io instead of file io, it expected to provide a paint.in and a paint.out file

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a{}, b{}, c{}, d{};
    std::cin >> a >> b >> c >> d;

    int length = (b-a) + (d-c);
    int overlap {};

    // in the example case they gave us, a and b are 7, 10
    //                                   c and d are 4, 8
    // so lower number out of 8 and 10 is 8 (min(b,d) gives 8)
    // so higher number out of 7 and 4 is 7 (max(a,c) gives 7)
    // min - max = 1 (> 0) so the overlap is min - max

    if (get_min(b,d) - get_max(a,c) < 0) { // first we're getting the lower number from b and d and the higher number from a and c
        // if the higher number from a and c is greater than the lower number from b and d then there is no overlap
        // subtracting would result in a negative number and a negative number would mean that there is no overlap 
        // so i directly set it t0 
        overlap = 0;
    } else {
        // if the higher number a and c isnt greater than the lower number from b and d then there is an overlap 
        // subtracting gives us the length of the overlap
        overlap = get_min(b,d) - get_max(a,c);
    }

    std::cout << length - overlap;

    return 0;
}
