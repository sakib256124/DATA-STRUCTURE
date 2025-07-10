#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int roll;
};
//Though we create the constructor of Student class, it also called first the Person class due to Inheritance , firstly Parent then Child
class Student : public Person{ // Inheritance property , 
public:
    string distict;
    // Student(string name , int roll, string distict) :Person(name ,roll){
    //     this->roll = roll;
    //     cout<<"Student ::"<<endl;
    // }

    void getInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"Roll :"<<roll<<endl;
        cout<<"Distict :"<<distict<<endl;
    }
};
class Graduate :public Student{
    public:
    string reSearch;

};

int main(){
    Graduate s1;
    s1.name ="rakib";
    s1.roll = 223;
    s1.distict = "thakurgaon";
    s1.reSearch = "Lebel Play";
    cout<<s1.name<<endl;
    cout<<s1.reSearch<<endl;
    return 0;

}