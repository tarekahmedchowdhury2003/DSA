#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

struct Stack {
    Node *top = NULL;
    int cnt = 0;

    void push(int d);
    void pop();
    int Size();
    bool Empty();
    int Top();
};

void Stack:: push(int d) {
    Node *newNode = new Node(d);

    if(Size()==0) {
        top = newNode;
    }
    else {
        newNode->next = top;
        top = newNode;
    }
    cnt++;
}

void Stack:: pop() {
    if(top == NULL) {
        cout << "Stack is empty. Underflow...\n";
        return;
    }

    Node *del = top;
    top = top->next;
    delete del;
    cnt--;

}

int Stack:: Size() {
    return cnt;
}

bool Stack:: Empty() {
    if(Size() == 0) {
        return 1;
    }
    return 0;
}

int Stack:: Top() {
    if(top == NULL) {
        cout << "Stack is empty.\n";
        return -1;
    }
    return top->data;
}

int main() {

    Stack st;


    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    while(st.Empty() != 1) {
        cout << st.Top() << endl;
        st.pop()
    }

    return 0;
}
