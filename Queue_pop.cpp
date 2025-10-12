#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
        Node(int val){
        data = val;
        next = NULL;
    }
};
class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = tail = NULL;
    }

    void push(int a){
        Node* newNode = new Node(a);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;

        }
    }

    void front(){
        if(empty()){
            cout<<"The queue is empty"<<endl;
        }else{
            cout<<head->data<<endl;
        }
        
    }

    void pop(){
        if(empty()){
            cout<<"The queue is empty "<<endl;
        }else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    bool empty(){
        return head == NULL;
    }

    void print(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue s1;
    s1.push(5);
    s1.push(10);
    s1.push(15);
    s1.push(25);
    s1.print();
    s1.front();
    s1.pop();
    s1.print();
    s1.front();
return 0;
}