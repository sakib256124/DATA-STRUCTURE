// Built in queue and deque
#include<iostream>
#include<vector>
#include<queue>
#include<deque>
using namespace std;

int main(){
    queue<int> q;
    deque<int> q2;
    // q.push(3);
    // q.push(4);
    // q.push(6);
    // q.push(8);
    
    
    q2.push_back(4);
    q2.push_back(6);
    q2.push_back(8);// 4,6,8
    q2.push_front(10);//10,4,6,8

    while(!q2.empty()){
        //cout<<q2.front()<< " ";
        cout<<q2.back()<<" ";
        //q2.pop_front();//10,4,6,8
        q2.pop_back();
    }

    return 0;
}