//In the name of Allah
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node (int d){
        data  = d;
        next = NULL;
    }

};

struct Queue{
    int cnt = 0;
    Node *front = NULL, *rear = NULL;

    void push(int d);
    void pop();
    int Size();
    bool Empty();
    int Front();
};

void Queue:: push(int d){
    Node *newNode = new Node (d);

    if(front == NULL){
        front = newNode;
        rear = newNode;
    }

    else{
        rear->next = newNode;
        rear = newNode;
    }

    cnt++;
}


void Queue:: pop(){
    if(front == NULL){
        cout << "Queue is empty... Underflow\n";
        return;
    }

    Node *del = front;
    front = front->next;

    if(front == NULL){
        rear = NULL;
    }

    delete del;
    cnt--;
}

int Queue:: Size(){
    return cnt;
}

bool Queue:: Empty(){
    if(Size() == 0){
        return 1;
    }
    return 0;
}

int Queue:: Front(){
    if(front == NULL){
        cout << "Queue is empty... Underflow\n";
        return -1;
    }

    return front->data;
}

int main(){
    Queue q;
    cout << q.Empty() << endl;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << q.Front() << endl;
    cout << q.Size() << endl;
    q.pop();

    cout << q.Front() << endl;
    cout << q.Size() << endl;
    cout << q.Empty() << endl;

    while(q.Empty() != 1){
        cout << q.Front() << " ";
        q.pop();
    }


    return 0;
}
