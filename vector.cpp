#include<iostream>
#include<vector>
//#include<bits/c++.h>
using namespace std;
int main(){
    vector<int>vec ={2,4,5};
    vec.push_back(45);
    vec.push_back(34);
 
    for(int i : vec)
      cout<<i<<endl;

cout<<"after pop back : "<<endl;
vec.pop_back();
for(int i : vec)
      cout<<i<<endl;




cout<<"first value print"<<vec.front()<<endl;
cout<<"last value print"<<vec.back()<<endl;
cout<<" any number any location"<<vec.at(3);
    return 0;


}