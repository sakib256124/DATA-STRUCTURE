#include<iostream>
using namespace std;
void Print();
void Print1();
class A{
 public:
 int x;
 void incX(){
    x = x+1;
 }
};
int main(){
    A obj;
    obj.x = 0;
    A obj2;
    obj2.x = 293;
    cout<<"11111   "<<obj.x<<endl;
    cout<<"22222    "<<obj2.x<<endl;
    obj.incX();
    obj2.incX();
    cout<<"11111    "<<obj.x<<endl;
    cout<<"22222    "<<obj2.x<<endl;
    // x = 0,1,2,3   because x changed due to static
Print();
Print();
Print();
Print();
Print1(); // x = 0 4 time
Print1();
Print1();
Print1();

    return 0;
} 

void Print(){
        static int x =0;
        cout<<"x :"<<x<<endl;
        x++;
    }
    void Print1(){
        int x =0;
        cout<<"x :"<<x<<endl;
        x++;
    }
