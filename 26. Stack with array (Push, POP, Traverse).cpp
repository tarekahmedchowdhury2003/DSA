#include<iostream>
using namespace std;

struct stack{
    int arr[100];
    int top = -1;               // Initially, top is -1 karon empty stack
    void push(int d);
    void pop();
    bool Empty();
    int Size();
    int Top();

};

void stack::push(int d){

    top++;
    arr[top]=d;
}

void stack::pop(){

    if(top== -1){
        cout<<"stack is empty.\n";
    }
    else{
        arr[top]=0;
        top--;
    }
}

int stack::Size(){
    return top +1;
}

bool stack::Empty(){

    if(top == -1){
        return 1;
    }
    return 0;
}

int stack::Top(){

    if(top == -1){
        cout<<"stack is empty. \n";
        return -1;
    }
    return arr[top];

}

int main(){

    stack st;
    st.push(10);
    st.push(20);

    cout<<st.Top()<<endl;
    
    // st.pop();
    // cout<<st.Top()<<endl;

    return 0;
}
