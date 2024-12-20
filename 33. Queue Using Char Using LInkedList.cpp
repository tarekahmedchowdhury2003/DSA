#include <iostream>
using namespace std;

struct Node{
    char data;
    Node *next;

    Node(char d){
        data = d;
        next = NULL;
    }

};

struct Queue{
    Node *front = NULL , *rear = NULL;
    int cnt =0;

    void push(char d);
    void pop();
    char print();
    bool Empty();
    int Size();
};
int Queue::Size(){

    return cnt;
}

bool Queue::Empty(){
    if(Size()== 0){
        return 1;
    }
    return 0;

}
void Queue::push(char d){
    Node *newNode = new Node(d);

    if(front == NULL){
        front = newNode;
        rear = newNode;
    }else {
        rear->next = newNode;
        rear = newNode;
    }
    cnt++;
}
void Queue::pop(){
    if(front == NULL){
        cout<<"UnderFlow";
    }

    Node *del = front;
    front = front->next;

    if(front == NULL){
        rear = NULL;
    }
    delete del;

}

char Queue::print(){

    if(front == NULL){
        cout<<"Queue is empty";
        return -1;
    }

    return front->data;



}



int main() {

    Queue q;

    q.push('A');
    q.push('B');
    q.push('C');

    
    q.pop();

    
    while (!q.Empty()) {
        cout << q.print() << " ";
        q.pop();
    }


    return 0;
}
