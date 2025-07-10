#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;
Student(string name, double cgpa){
    this->name = name;
    cgpaPtr = new double;
    *cgpaPtr  = cgpa;
}

~Student(){
    cout<<"Hi, I delete everything \n";
    delete cgpaPtr;// its must be write delete for dynamically allocate memory , other delet without using delelte keyword
}
void getInfo(){
    cout<<"Name :"<<name<<endl;
    cout<<"cgpe :"<<*cgpaPtr<<endl;
}
};
int main(){
    Student s1("Sakib",3.4);
    s1.getInfo();
    return 0;
}