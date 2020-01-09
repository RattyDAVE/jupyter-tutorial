//  Created by Edward Hong on 8/18/18.

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

// changing values assigned to variables
// using pointers

void AssignAge3(int* pAge);

int main(){
    int age = 43;
    AssignAge3(&age);
    std::cout << "Pointer Age " << age << "\n";
    return 0;
}

// functions
void AssignAge3(int* pAge){
    *pAge = 22;
}

// end funcions
