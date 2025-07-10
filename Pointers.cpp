#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 5;
    int* ptr = &a; // int *ptr 
    int** ptr2 = &ptr;
    cout<<"addres of ptr1  "<<ptr2<<endl;// pointer to pointer
    cout<<"address of a    "<<ptr<<endl; // first pointer
    cout<<"address of ptr1 "<<&ptr<<endl; 
    cout<<"address of a    "<<&a<<endl;
    //Dereference operator
    cout<<ptr<<" where the value "<<*ptr<<endl;
    cout<<ptr2 <<" where the value "<<*ptr2<<endl; // here *ptr2 prints the value of ptr addresses. measn the address of a
    cout<<ptr2 <<" where the value "<<**ptr2<<endl; // **ptr2 returns the value of a
    int** ptr3 = NULL;
    cout<<*ptr3<<endl;
    return 0;
}