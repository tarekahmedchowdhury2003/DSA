#include <iostream>
using namespace std;

struct queue {
    int arr[100];
    int rear = -1;         // Initially, rear is -1 karon empty queue
    int front = 0;

    void push(int d);
    void pop();
    bool Empty();
    int Size();
    int Front();
};

void queue::push(int d) {
    if (rear < 99) {
        rear++;  
        arr[rear] = d; 
    }
    else{
        cout << "Queue is full.\n";
    }
}

void queue::pop() {
    if (front > rear) {
        cout << "Queue is empty.\n";
    }
    else{
        front++; 
    }
}

int queue::Size() {
    return rear - front + 1; 
}

bool queue::Empty() {
    return front > rear;            // Queue is empty front > rear
}

int queue::Front() {
    if (front > rear) {
        cout << "Queue is empty.\n";
        return -1;
    }
    return arr[front];            
}

int main() {
    queue que;

    que.push(10); 
    que.push(20);

    cout << que.Front() << endl; 

    que.pop(); 

    cout << que.Front() << endl; 

    return 0;
}
