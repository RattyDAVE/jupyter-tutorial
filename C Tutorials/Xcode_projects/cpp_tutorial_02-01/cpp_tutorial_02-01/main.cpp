//  Created by Edward Hong on 8/11/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    //  conditional operators (note: && || !)
    std::string sAge = "0";
    //  note that since we are creating a string variable here,
    //  we can't initialize it with an integer
    std::cout << "Enter your age: ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);
    
    if ((nAge >= 1) && (nAge <= 18)) {
        std::cout << "Important Birthday\n";
    } else if ((nAge == 21) || (nAge == 50)) {
        std::cout << "Important Birthday\n";
    } else if (nAge >= 65) {
        std::cout << "Important Birthday\n";
    } else {
        std::cout << "Not an important birthday\n";
    }
    
    return 0;
}
