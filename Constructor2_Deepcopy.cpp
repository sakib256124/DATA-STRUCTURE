#include<iostream>
using namespace std;
// Deep copy 
class Student{
    public:
    string name;
    double* cgpaPtr;
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    Student(Student &obj){
        cout<<"\n\n this is custom cons... :"<<endl;
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr =  *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name :"<<name<<endl;
        cout<<"cgpa :"<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("rakib",3.33);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr) = 2.3;
    s2.name = "neha";
    s2.getInfo();
    cout<<"again s1"<<endl;
    s1.getInfo();
    return 0; 
}