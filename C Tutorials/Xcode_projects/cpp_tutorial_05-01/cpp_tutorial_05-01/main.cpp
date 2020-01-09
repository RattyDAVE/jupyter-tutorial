// Created by Edward Hong on 9/23/18.

// In Tutorial 5, we'll cover: Math Functions, Strings, and others.

#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <numeric>

int main() {
    char cString[] = {'A', ' ', 'S', 't', 'r', 'i', 'n', 'g', '\0'};
    std::cout << "Array size of cString: " << sizeof(cString) << "\n";
    
    std::vector<std::string> strVec(10);
    std::string str("I'm a string");
    strVec[0] = str;
    std::cout << str[0] << "\n";
    std::cout << str.at(0) << "\n";
    std::cout << str.front() << ' ' << str.back() << "\n";
    std::cout << "length: " << str.length() << "\n";
    std::string str2(str);
    strVec[1] = str2;
    for (auto y: strVec) std::cout << y << "\n";
    
    return 0;
}
