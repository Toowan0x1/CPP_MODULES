#include <iostream>

class Harl {
public:
    void exampleFunction() {
        std::cout << "This is an example function." << std::endl;
    }
};

int main() {
    // Declare a variable of type t_func
    t_func myFunctionPointer;

    // Create an instance of Harl
    Harl harl;

    // Assign the address of the member function to the pointer
    myFunctionPointer = &Harl::exampleFunction;

    // Call the member function through the pointer
    (harl.*myFunctionPointer)(); // Output: This is an example function.

    return 0;
}

