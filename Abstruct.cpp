#include<iostream>
#include<string>
using namespace std;
// Abstruction-> data hiding and essential data showing
//abstract class(because virtual used), can not create an object
class Student{
    public:
    virtual void Draw()=0;
    
};
class Circle:public Student{
    public:
    void Draw(){
        cout<<"draw a circle"<<endl;
    }
};
int main(){
    Circle s1;
    s1.Draw();
    return 0;
}