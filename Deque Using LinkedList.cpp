#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int d) {
        data = d;
        next = NULL;
        prev = NULL;
    }
};

struct Dequeue {
    Node* front = NULL;
    Node* rear = NULL;
    int count = 0;  

      
    void pushFront(int d);
    void pushBack(int d);
    void popFront();
    void popBack();
    int size();
    bool empty();
    int topFront();
    int topBack();
    void print();
};

bool Dequeue::empty() {
    return front == NULL;
}

int Dequeue::size() {
    return count;
}

void Dequeue::pushFront(int d) {
    Node* newNode = new Node(d);
    if (empty()) {
        front = rear = newNode;
    } else {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
    }
    count++;
}

void Dequeue::pushBack(int d) {
    Node* newNode = new Node(d);
    if (empty()) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        newNode->prev = rear;
        rear = newNode;
    }
    count++;
}

void Dequeue::popFront() {
    if (empty()) {
        cout << "Empty."<<endl;
        return;
    }
    Node* temp = front;
    if (front == rear) {  
        front = rear = NULL;
    } else {
        front = front->next;
        front->prev = NULL;
    }
    delete temp;
    count--;
}

void Dequeue::popBack() {
    if (empty()) {
        cout << "empty."<<endl;
        return;
    }
    Node* temp = rear;
    if (front == rear) {  
        front = rear = NULL;
    } else {
        rear = rear->prev;
        rear->next = NULL;
    }
    delete temp;
    count--;
}

int Dequeue::topFront() {
    if (empty()) {
        cout << "empty."<<endl;
        return -1;  
    }
    return front->data;
}

int Dequeue::topBack() {
    if (empty()) {
        cout << "empty."<<endl;
        return -1;  
    }
    return rear->data;
}

void Dequeue::print() {
    if (empty()) {
        cout << "empty."<<endl;
        return;
    }
    Node* temp = front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout <<endl;
}

int main() {
    Dequeue dq;

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushFront(5);
    dq.pushFront(1);
    dq.print();  

    cout << "Size: " << dq.size() <<endl;  
    cout << "Top Front: " << dq.topFront() <<endl; 
    cout << "Top Back: " << dq.topBack() <<endl;   

    dq.popFront();
    dq.print();  

    dq.popBack();
    dq.print();  

}
