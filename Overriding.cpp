#include<iostream>
#include<string>
using namespace std;

// Same named Function in different class with different implementation
class Parent{
public :
void getInfo(){
    cout<<"Parent class"<<endl;
}
};
class Child:public Parent{
    public:
    void getInfo(){
        cout<<"Chlild Class"<<endl;
    }
};
int main(){
    Parent p1;
    p1.getInfo();
    return 0;
}