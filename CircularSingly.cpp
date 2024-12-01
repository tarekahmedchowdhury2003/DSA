#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int d){
        data = d;
        next = NULL;
    }
};

struct CSL{
    Node *head = NULL;

    void insertAtHead(int d);
    void insertAtEnd(int d);
    void insertAtAnypos(int d, int pos);

    void deleteHead();
    void deleteEnd();

    void searching(int num);

    void maximum();
    void minimum();
    void print();


};

void CSL::insertAtHead(int d){

    Node *newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        newNode->next = head;
    }else{
        Node *lastNode  = head;

        while(lastNode->next != head){
            lastNode = lastNode->next;
        }
        newNode->next = head;
        lastNode->next = newNode;

        head = newNode;

    }
}

void CSL::insertAtEnd(int d){
    Node *newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        newNode->next = head;
        
    }else{
        Node *lastNode = head;

        while(lastNode->next != head){
            lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->next = head;


    }
}

void CSL::deleteHead(){

    if(head == NULL){
        cout<<"List is enpty";
        return;
    }

    Node *lastNode = head;
    while (lastNode->next != head){

        lastNode = lastNode->next;
    }

    Node *h = head;
    lastNode->next = head->next;
    head = head->next;

    delete h;

 
    
}

void CSL::deleteEnd(){
    
    if(head == NULL){
        cout<<"List is empty";
        return;
    }
    Node *lastNode = head;
    Node *secondlastNode = NULL;

    while(lastNode->next != head){
        secondlastNode = lastNode;
        lastNode = lastNode->next;
    }

    secondlastNode->next = head;
    delete lastNode;
    
    

}

void CSL::insertAtAnypos(int d, int pos){
    Node *newNode = new Node(d);

    if(head == NULL){
        cout<<"Empty";
        return;
    }

    if(pos == 1){
        insertAtHead(d);

    }

    Node *h = head;

    for(int i =1; i<pos-1 && h->next != head; i++){
        h = h->next;
    }

    newNode->next = h->next;
    h->next = newNode;


    
}

void CSL::searching(int num) {

    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    Node *h = head;
    do {
        if (h->data == num) {
            cout << "Found" << endl;
            return;
        }
        h = h->next;
    } while (h != head);

    cout << "Not Found" << endl; 
}

void CSL::print() {

    if(head == NULL){
        cout<<"Empty";
        
    }else{
        Node *h = head;
        do {
           cout<<h->data<<endl;
           h = h->next;
        }while(h != head);
    }
    
}

void CSL::maximum(){

    if(head == NULL){
        cout<<"List is empty";
        return;
    }

    int max = head->data;
    Node *h = head;

    do
    {
        if(h->data > max){
            max = h->data;
        }
        h =h->next;

    } while (h != head);

    cout<<"Maximum: "<<max<<endl;
    
}
void CSL::minimum(){

    if(head == NULL){
        cout<<"List is empty";
        return;
    }

    int min = head->data;
    Node *h = head;

    do{
        if(h->data < min){
            min = h->data;
        }
        h = h->next;

    }while(h != head);

    cout<<"Minimum: "<<min<<endl;
}

int main() {

    CSL li;

    li.insertAtHead(20);
    li.insertAtEnd(10);

    li.deleteHead();
    li.deleteEnd();

    li.searching(20);
    li.insertAtAnypos(44,2);
    li.maximum();
    li.minimum();


    li.print();



    return 0;
}