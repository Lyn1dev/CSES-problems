#include <iostream>

int main() {

    std::string dna {};
    std::cin >> dna;

    long long total_chars = dna.length();
    long long streak {1};
    long long max_streak {1};

    for(long long i{1}; i <= total_chars-1; ++i) { // isnt this the same as i < total_chars? yeah it is, but only if its a positive value
        if (dna[i] == dna[i-1]) { // starting with 1 instead of 0 to compare the 2nd character with the first character
            streak = streak+1; // if theyre different then streak stays at 1, not 0 cuz the first character is still a streak
        }                       // adding 1 to the streak if the 2nd character is the same as the first character
        else if (dna[i] != dna[i-1]) { // if it breaks then it saves to a max streak and just continues running until it goes through
            max_streak = std::max(streak, max_streak); // until it goes thru all the total_characters
            streak = 1;                     // youo dont wanna use i = total_characters cuz its indexed from 0 not 1, so the last
        }                                   // letter of the string is actually saved at total_chars-1
    }

    std::cout << std::max(max_streak, streak);

}
