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
    Node* rare;
public:
    Queue(){
        head = rare = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = rare = newNode;
        }else{
            rare->next = newNode;
            rare = newNode;
        }
    }

    void pop(){
        if(isEmpty()){
            cout<<"The queue is null :"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

    }

    void front(){
        if(isEmpty()){
            cout<<"The queue is empty :"<<endl;
        }
        cout<<head->data<<endl;
    }

    bool isEmpty(){
        return head == NULL;
    }
    void print(){
        Node* temp = head;
        if(temp == NULL){
            cout<<"Node is empty :"<<endl;
            return;
        }
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }

};

int main(){
    Queue q1;
    q1.push(23);
    q1.push(34);
    q1.push(66);
    q1.push(88);
    q1.push(99);
    q1.push(111);
    q1.print();
    q1.pop();
    q1.print();
    q1.front();
    return 0;
}