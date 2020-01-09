// Created by Edward Hong on 9/22/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

std::vector<int> Rnage(int start, int max, int step);

int main() {
    srand( static_cast<unsigned int>(time(NULL)));
    // in the tutorial, Derek used srand(time(NULL));
    // to supress the warning, use the above line instead;
    
    int secretNum = std::rand() % 11;
    int guess = 0;
    
    while(true) {
        std::cout << "Guess the number: ";
        std::cin >> guess;
        if(guess > secretNum) std::cout << "Too big\n";
        else if(guess < secretNum) std::cout << "Too small\n";
        else if(secretNum == guess) break;
        // else if makes more sense
        // also note that we can leave out the {} part following our if statement here
    }
    
    std::cout << "Bingo!\n";
    
    return 0;
}
