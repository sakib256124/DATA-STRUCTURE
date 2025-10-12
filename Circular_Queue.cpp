#include<iostream>
#include<vector>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize , cap;
    int frnt, rear;

public:
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        frnt = 0;
        rear = -1;
        currSize = 0;
    }

    void push(int data){
        if(currSize == cap){
            cout<<"Q is full "<<endl;
            return;
        }
        rear = (rear+1)%cap;
        arr[rear] = data;
        currSize++;

    }

    void pop(){
        if(isEmpty()){
            cout<<"CQ is empty "<<endl;
            return;
        }
        frnt = (frnt+1)%cap;
        currSize--;

    }

    int front(){
        if(isEmpty()){
            cout<<"This empty"<<endl;
            return -1;
        }
        return arr[frnt];
    }

    bool isEmpty(){
        return currSize == 0;
    }

    void print(){///print array not queue
        for (int i = 0; i < cap; i++)
        {
            cout<<arr[i]<<endl;
        }
        
    }

};

int main(){

    CircularQueue cq(4);
    cq.push(34);
    cq.push(35);
    cq.push(36);
    cq.push(37);
    cq.push(38);
    cq.print();
    cq.pop();
    cq.push(38);
    cq.print();

    while (!cq.isEmpty()) {
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;
    return 0;
}