#include <iostream>
#include <cstring>

class DeepCopyExample {
private:
    char* data;

public:
    // Constructor
    DeepCopyExample(const char* str) {
        data = new char[std::strlen(str) + 1];
        std::strcpy(data, str);
    }

    // Deep copy constructor
    DeepCopyExample(const DeepCopyExample& other) {
        data = new char[std::strlen(other.data) + 1];
        std::strcpy(data, other.data);
    }

    // Destructor
    ~DeepCopyExample() {
        delete[] data;
    }

    void displayData() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    DeepCopyExample original("Hello, Deep Copy!");
    original.displayData();

    DeepCopyExample copy = original; // Deep copy
    copy.displayData();

    return 0; // Destructors for 'original' and 'copy' are called
}

