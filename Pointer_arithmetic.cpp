#include<iostream>
using namespace std;
int main(){
    // int a = 10;
    // int* p = &a;
    // cout<<p<<endl;
    // p++;
    // cout<<p<<endl;
    // p = p+1;
    // cout<<p<<endl;
    int arr[] ={2,3,4,5,6};
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<*(arr+2)<<endl;
    // cout<<*(arr+3)<<endl;
    // int* ptr;// add 56
    // int* ptr2 = ptr+2;//add 64
    // cout<<(ptr2 - ptr)<<endl; 
    int *ptr = arr;
    int* ptr2 = ptr+1;
    cout<<ptr<<" "<<ptr2<<endl;
    cout<<*ptr<<" "<<*ptr2<<" "<<*(ptr2 +1)<<endl;
    
    return 0;

}