//  Created by Edward Hong on 8/11/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {
    
    //  create strings, receive user inputs
    std::string sQuestion ("Enter number 1: ");
    std::string sNum1, sNum2;
    std::cout << sQuestion;
    getline(std::cin, sNum1);
    std::cout << "Enter number 2: ";
    getline(std::cin, sNum2);
    
    //  convert strings to integers
    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);
    
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1+nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1-nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1*nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1/nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1%nNum2));
    
    return 0;
}
