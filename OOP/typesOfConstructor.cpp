#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        std::cout << "Default constructor called" << std::endl;
    }

    // Parameterized constructor
    Person(std::string n, int a) {
        name = n;
        age = a;
        std::cout << "Parameterized constructor called" << std::endl;
    }

    // Copy constructor
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        std::cout << "Copy constructor called" << std::endl;
    }

    // Method to display person details
    void display() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Using default constructor
    Person person1;
    person1.display();

    // Using parameterized constructor
    Person person2("Alice", 30);
    person2.display();

    // Using copy constructor
    Person person3 = person2;
    person3.display();

    return 0;
}
