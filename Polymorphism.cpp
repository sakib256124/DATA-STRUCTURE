#include<iostream>
#include<string>
using namespace std;
/// This is compile time Polymorphism
class Polymorphism{
public :
    int age;
    Polymorphism(){
        cout<<"Non-perameterized constructor"<<endl;
    }
    Polymorphism(string name, int age){
        cout<<name<<endl;
        this->age = age;
        cout<<age<<endl;
    }
    int add(int x, int y){
        return x+y;
    }
    int add(int x, int y, int z){
        return x + y + z;
    }
};
int main(){
    
    Polymorphism p1("rakib",21);
    Polymorphism p2;
    cout<<p2.add(4,5)<<endl;
    cout<<p2.add(3,43,43)<<endl;

    return 0;
}