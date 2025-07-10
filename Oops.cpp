#include <iostream>
#include <string>
using namespace std;

// Encapsulation: bundling data and functions into one class
class Teacher {
private:
    double salary;

public:
    // Properties or attributes
    string name;
    string dept;
    string subject;

    // Default constructor (no parameters)
    Teacher() {
        cout << "bangladesh is" << endl;
        dept = "fet";
        cout << dept << endl;
    }

    // Parameterized constructor
    Teacher(string n, string d, string s, double sa) {
        name = n;
        dept = d;
        subject = s;
        salary = sa;
    }

    // Setter for private variable salary
    void setSalary(double s) {
        salary = s;
    }

    // Getter for salary (could be used for printing or logic)
    double getSalary() {
        return salary;
    }

    // Display name and department
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
    }

    // Change department
    void changeDept(string newDept) {
        dept = newDept;
        cout << "Changed Department: " << dept << endl;
    }
};

int main() {
    // Using parameterized constructor
    Teacher t1("hello", "cse", "gk", 3434);

    // Using default constructor
    Teacher t2;

    // Setting values manually for t2
    t2.name = "t2_name";
    t2.dept = "eee";
    cout << "Initial t2 dept: " << t2.dept << endl;

    // Change department of t2
    t2.changeDept("ece");

    // Display t1 info
    cout << "\nt1 Info:" << endl;
    t1.getInfo();

    // Set and get salary for t1
    t1.setSalary(4354444);
    cout << "Updated Salary of t1: " << t1.getSalary() << endl;

    return 0;
}
