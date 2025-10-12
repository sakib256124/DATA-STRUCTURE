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
    void push(int data){
        Node* newNode = new Node(data);
        if(empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail= newNode;
        }

    }

    void front(){
        if(empty()){
            cout<<"The queue in empty "<<endl;
        }else{
            Node* temp  = head;
            cout<<"Front or top value"<<head->data<<endl;
            head = head->next;
            delete temp;
        }
        

    }

    bool empty(){
        return head == NULL;
    }
    void Print(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }
};

int main(){

    Queue q1;
    q1.push(3);
    q1.push(5);
    q1.push(7);
    q1.Print();
    q1.front();
    q1.Print();

    return 0;
}