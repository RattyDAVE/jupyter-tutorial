//  Created by Edward Hong on 8/13/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric> // needed for std::iota

// define the return type and data types for functions
// using a function prototype so main knows what is to be expected
// from this function
// it's like a little precursor
double AddNumbers(double num1, double num2);

int main() {
    double num1, num2;
    std::cout << "Enter Number 1: ";
    std::cin >> num1;
    std::cout << "Enter Number 2: ";
    std::cin >> num2;
    printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1, num2));
    return 0;
}

// the definition of our AddNumbers function
double AddNumbers(double num1, double num2) {
    return num1 + num2;
}
