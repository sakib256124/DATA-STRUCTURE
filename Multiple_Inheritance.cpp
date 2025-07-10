#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    int age;
    int rollNo;
};
class Teacher{
public:
    string subject;
    double salary;
};
class Dept :public Student,public Teacher{
public:
    string dept_Name;
    void getInfo(){
        cout<<"age :"<<age<<endl;
        cout<<"subject :"<<subject<<endl;
        cout<<"Department name :"<<dept_Name<<endl;
    }

};
int main(){
    Dept d1;
    d1.age =13;
    d1.subject = "Computer Security";
    d1.dept_Name = "cse";
    d1.getInfo();
    return 0;
}