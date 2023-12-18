#include <iostream>
#include <cstring>

class Person {
private:
    char* name;

public:
    // Constructor
    Person(const char* n) {
        // Dynamically allocate memory for the name
        name = new char[std::strlen(n) + 1];
        std::strcpy(name, n);
        std::cout << "Constructor: " << name << " is born!" << std::endl;
    }

    // Copy constructor
    Person(const Person& other) {
        // Dynamically allocate memory for the name and copy the content
        name = new char[std::strlen(other.name) + 1];
        std::strcpy(name, other.name);
        std::cout << "Copy Constructor: " << name << " is cloned!" << std::endl;
    }

    // Destructor
    ~Person() {
        // Deallocate the dynamically allocated memory
        delete[] name;
        std::cout << "Destructor: " << name << " is gone!" << std::endl;
    }

    // Display the name
    void displayName() const {
        std::cout << "Name: " << name << std::endl;
    }
};

int main() {
    // Create a Person object
    Person person1("Alice");
    person1.displayName();

    // Use the copy constructor to create a new Person object
    Person person2 = person1;
    person2.displayName();

    return 0;
}

