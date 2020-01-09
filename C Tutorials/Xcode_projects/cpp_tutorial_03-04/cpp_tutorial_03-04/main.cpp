//  Created by Edward Hong on 8/18/18.

// pointers

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main() {
    int age = 43;
    int* pAge = NULL;
    pAge = &age;
    std::cout << "Address: " << pAge << "\n";
    std::cout << "Value at Address: " << *pAge << "\n";
    
    int intArray[] = {1,2,3,4};
    int* pIntArray = intArray;
    std::cout << "1st value: " << *pIntArray <<"; Address: " << pIntArray << "\n";
    pIntArray++;
    std::cout << "2nd value: " << *pIntArray << "; Address: " << pIntArray << "\n";
    pIntArray--;
    std::cout << "1st value: " << *pIntArray << "; Address: " << pIntArray << "\n";
    
    return 0;
}
