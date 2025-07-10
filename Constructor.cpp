#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // Default constructor
    Teacher() {
        dept = "Computer Science";
        name = "Unnamed";
        subject = "Unknown";
        salary = 0.0;
    }

    // Parameterized constructor
    Teacher(string name, string dept, string subject, double salary) {
        this->name = name;
        this->dept = dept; // dept is the parameter, this->dept is the class property
        this->subject = subject;
        this->salary = salary;
    }

    // Copy constructor
    Teacher(const Teacher &orobj) {
        cout << "Custom Copy Constructor Called" << endl;
        this->name = orobj.name;
        this->dept = orobj.dept;
        this->subject = orobj.subject;
        this->salary = orobj.salary;
    }

    // Method to display teacher info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: $" << salary << endl << endl;
    }
};

int main() {
    // Using default constructor
    Teacher t1;
    t1.name = "Rafiq";
    t1.subject = "Algorithms";
    t1.displayInfo();

    // Using parameterized constructor
    cout << "With parameterized constructor" << endl;
    Teacher t2("Nabila", "EEE", "Linear Algebra", 23344);
    t2.displayInfo();

    // Using copy constructor
    cout << "Using copy constructor" << endl;
    Teacher t3(t2);  // creates a copy of t2
    t3.displayInfo();
    system("pause"); // for Windows

    return 0;
}
