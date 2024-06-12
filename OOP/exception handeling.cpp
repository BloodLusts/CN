#include<iostream>
#include<stdexcept> // For standard exceptions
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0) {}

    void setDate(int d, int m, int y) {
        if (d < 1 || d > 31 || m < 1 || m > 12) {
            throw invalid_argument("Invalid date: Day must be between 1 and 31, and Month must be between 1 and 12.");
        }
        day = d;
        month = m;
        year = y;
    }

    void showDate() const {
        cout << day << "-" << month << "-" << year << endl;
    }
};

class Person {
private:
    string name;
    int personID;

public:
    Person() : name(""), personID(0) {}

    void setName(const string& n) {
        if (n.empty()) {
            throw invalid_argument("Invalid name: Name cannot be empty.");
        }
        name = n;
    }

    void setPersonID(int id) {
        personID = id;
    }

    void showPerson() const {
        cout << "Name: " << name << ", ID: " << personID << endl;
    }
};

int main() {
    try {
        Date date;
        date.setDate(15, 6, 2024); // Valid date
        cout << "Date: ";
        date.showDate();

        // Uncomment the following line to test an invalid date
        // date.setDate(32, 13, 2024); // Invalid date

        Person person;
        person.setName("John Doe"); // Valid name
        person.setPersonID(12345);
        cout << "Person: ";
        person.showPerson();

        // Uncomment the following line to test an invalid name
        // person.setName(""); // Invalid name
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
