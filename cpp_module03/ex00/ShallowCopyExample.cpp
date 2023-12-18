#include <iostream>
#include <cstring>

class ShallowCopyExample {
private:
    char* data;

public:
    // Constructor
    ShallowCopyExample(const char* str) {
        data = new char[std::strlen(str) + 1];
        std::strcpy(data, str);
    }

    // Shallow copy constructor
    // ShallowCopyExample(const ShallowCopyExample& other) : data("salam") {
    ShallowCopyExample(const ShallowCopyExample& other) : data(other.data) {
        // Only copies the address, not the content
    }

    // Destructor
    ~ShallowCopyExample() {
        delete[] data;
    }

    void displayData() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    ShallowCopyExample original("Hello, Shallow Copy!");
    original.displayData();

    ShallowCopyExample copy = original; // Shallow copy
    copy.displayData();

    return 0; // Destructors for 'original' and 'copy' are called
}

