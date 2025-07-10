#include<iostream>
using namespace std;
// void Plas(int a){
//     a = a-10;
// }
// void Min(int* b){
//     *b = *b-10;
// }
// void Max(int &c){  // pass by alias 
//     c = c*c;
// }
// int main(){
//     int a = 56;
//     Plas( a);// pass by value
//     cout<<"now a's value "<<a<<endl;
//     int b = 55;
//     Min(&b); // pass by reference or address
//     cout<<"now b's value "<<b<<endl;
//     int c = 5;
//     Max(c);
//     cout<<"pass by alias "<<c<<endl;
//     return 0;
// }
int main(){
    int arr[] ={12,32,44,53,53,23};
    cout<<arr<<endl;// return the address , constant function, return the reference of first value
    cout<<*arr<<endl;// return the value of first index
    cout<<&arr[0]<<endl;
    int a = 29 , b=6;
    int* ptr = &b;
    ptr = &a; // can change the reference of its
    ///arr = &a; // can not change the reference of arr. its constant
    
    cout<<ptr<<ptr++<<endl;
}