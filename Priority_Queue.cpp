#include<iostream>
using namespace std;

struct Node {
    int data;
    int priority;
};

class PriorityQueue {
    Node* arr;
    int size;
    int capacity;

public:
    PriorityQueue(int cap) {
        capacity = cap;
        arr = new Node[capacity];
        size = 0;
    }

    // Insert element by priority
    void push(int data, int priority) {
        if (size == capacity) {
            cout << "Queue is full\n";
            return;
        }

        int i = size - 1;
        // Move elements with lower priority one step right
        while (i >= 0 && arr[i].priority > priority) {
            arr[i + 1] = arr[i];
            i--;
        }

        // Insert new element
        arr[i + 1].data = data;
        arr[i + 1].priority = priority;
        size++;
    }

    // Remove element with highest priority (lowest number)
    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        // Remove first element (highest priority)
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    // Return element with highest priority
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[0].data;
    }

    bool isEmpty() {
        return size == 0;
    }

    void print() {
        cout << "Priority Queue:\n";
        for (int i = 0; i < size; i++) {
            cout << "Data: " << arr[i].data << ", Priority: " << arr[i].priority << endl;
        }
    }

    ~PriorityQueue() {
        delete[] arr;
    }
};

int main() {
    PriorityQueue pq(5);

    pq.push(10, 2); // data: 10, priority: 2
    pq.push(30, 1); // higher priority
    pq.push(20, 3);

    pq.print(); // Should show elements sorted by priority

    cout << "Top Element: " << pq.front() << endl;

    pq.pop();
    pq.print();

    return 0;
}
