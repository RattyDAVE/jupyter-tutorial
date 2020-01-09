//  Created by Edward Hong on 8/11/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    
    std::string sAge = "0";
    std::cout << "Enter age: ";
    getline(std::cin, sAge);
    int nAge = std::stoi(sAge);
    
    //  Note that you can leave out the curly brackets if it's only one line
    if (nAge < 5)
        std::cout << "Too young for school\n";
    else if (nAge == 5)
        std::cout << "Go to kindergarten\n";
    else if (nAge <= 17)
        std::cout << "Go to grade " << nAge - 5 << "\n";
    else
        std::cout << "Go to college\n";
    
    return 0;
}
