#include<iostream>
using namespace std;

#define MAX 100 //maximum stack size

struct Stack {
    int data[MAX];
    int top;
};

//Initialize Stack
void init (Stack &s){
    s.top = -1;
}

// check if the stack is empty
bool empty(Stack &s){
    return s.top == -1;
}

// check if the stack is full
bool full(Stack &s){
    return s.top == MAX -1;
}

//Push an element
void push(Stack  &s,int value){
    if(full(s)){
        cout<<"Stack overflow cannot  push "<<endl;
        return;
    }
    s.data[++s.top] = value;
}

//pop element
void pop(Stack &s){
    if(empty(s)){
        cout<<"Stack is underflow "<<endl;
        return;
    }
    s.top--;
}
int peek(Stack &s){
    if(empty(s)){
        cout<<"Stack is empty "<<endl;
        return -1;
    }
    return s.data[s.top];
}

//display all

void display(Stack &s){
    if(empty(s)){
        cout<<"Stack is empty :"<<endl;
        return;
    }
    cout<<"Stack elements : ";
    for(int i = s.top;i>=0;i--){
        cout<<s.data[i]<<" ";
    }
    cout<<endl;
}



int main(){

    Stack s;
    init(s);
    push(s, 5);
    push(s, 10);
    push(s, 15);
    push(s, 20);
    display(s);
    pop(s);
    display(s);
    cout<<peek(s);
    return 0;
}