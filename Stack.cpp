#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Love{
    list<int>ll;
    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }
};
int main(){
    Love s;
    s.push(4);
    s.push(5);    
    s.push(6);
    s.push(7);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
  
}
