#include <iostream> 
#include <vector>
#include <cctype> 
#include <string>
#include <algorithm>

int main() { // this is bad it isnt effecient enough learn hashmap soon

    long long n{};
    std::cin >> n;
    std::vector<std::string> list{};
    for(long long i{}; i<n; ++i){
        std::string object{};
        std::cin >> object;
        if (std::find(list.begin(), list.end(), object) == list.end()) {
        list.push_back(object);
        std::cout << "OK\n";    
        }
        else {
            long long suffix = 1; // start counting at 1 for 
    
            // convert an int to a string
            std::string newName = object + std::to_string(suffix);
    
            // scan the list, if object is taken then add suffix to the object
            while (std::find(list.begin(), list.end(), newName) != list.end()) {
                suffix++;
                newName = object + std::to_string(suffix); 
            }
    
            // if while loop broke then you can print newName itll be the object + whats added
            list.push_back(newName); // add it back to list so you make sure you dont repeat it
            std::cout << newName << "\n";
        }
        
        }
        
    }




