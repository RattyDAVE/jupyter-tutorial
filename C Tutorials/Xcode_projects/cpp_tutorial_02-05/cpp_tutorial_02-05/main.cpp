//  Created by Edward Hong on 8/11/18.

//  Problem: Build a calculator that takes in user inputs and outputs the equation with a result.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main(){
    
    //  My solution differs a bit from Derek's. I think it's a better idea to define variables before you use them
    //  rather than throwing the declarations all at the top.
    //  I also leave out the curly brackets in the if statements for simplicity
    
    std::string calculation; // to store user input
    std::cout << "Enter calculation (e.g. 5 + 6): "; // prompt the user to input
    getline(std::cin, calculation); // save user input to string variable
    std::stringstream ss(calculation);
    std::string IndivStr;
    std::vector<std::string> vecsCalc;
    while(getline(ss, IndivStr, ' ')){
        vecsCalc.push_back(IndivStr);
    }
    
    double num1 = std::stoi(vecsCalc[0]);
    double num2 = std::stoi(vecsCalc[2]);
    std::string operation = vecsCalc[1];
    
    if (operation == "+")
        printf("%.1f + %.1f = %.1f\n", num1, num2, num1+num2);
    else if (operation == "-")
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1-num2);
    else if (operation == "*")
        printf("%.1f * %.1f = %.1f\n", num1, num2, num1*num2);
    else if (operation == "/")
        printf("%.1f / %.1f = %.1f\n", num1, num2, num1/num2);
    else
        std::cout << "Please enter only +, -, *, or /" << "\n";
    
    return 0;
    
}
