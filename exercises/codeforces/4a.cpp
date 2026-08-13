#include <iostream>


int main() {

    int w{};

    std::cin >> w;

    if (w >= 4) {

    if (w % 2 == 0) {

        std::cout << "YES";

    }

    else {

        std::cout << "NO";

    }

    }

    else {

        std::cout << "NO";

    }

}
