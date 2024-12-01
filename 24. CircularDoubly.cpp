#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next, *prev;

    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
};

struct CDL{

    Node *head = NULL;

    void insertAtHead(int d);
    void insertAtEnd(int d);
    void insertAtAnypos(int d, int pos);

    void deleteHead();
    void deleteEnd();
    void deleteAtAnypos();

    void searching(int num);
    void maximum();
    void minimum();

    void print();
};

void CDL::insertAtHead(int d){
    Node *newNode = new Node(d);

    if(head == NULL){

        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
    }else{
        // Node *lastNode = head;

        // while(lastNode->next != head){
        //     lastNode = lastNode->next;
        // }

        Node *lastNode = head->prev;

        newNode->next = head;
        newNode->prev = lastNode;
        head->prev = newNode;
        lastNode->next = newNode;

       
        head = newNode;
    }
}


void CDL::insertAtEnd(int d){
    Node *newNode = new Node(d);

    if(head == NULL){
        head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;

    }else{
        Node *lastNode = head->prev;

        lastNode->next = newNode;
        newNode->prev = lastNode;
        newNode->next = head;
        head->prev = newNode;
    }
}

void CDL::insertAtAnypos(int d, int pos){

    Node *newNode = new Node(d);

    if (pos == 1){
        insertAtHead(d);
    }

    Node *h = head;

    for(int i = 1; i<pos-1 && h->next != NULL; i++ ){
        h = h->next;

    }

    newNode->next = h->next;
    newNode->prev = h;

    h->next->prev = newNode;
    h->next = newNode;
    

}

void CDL::deleteHead(){

    if(head == NULL){
        cout<<"Empty";
        return;
    }
    if(head->next == head){
        delete head;
        head = NULL;
    }else{

        Node *lastNode = head->prev;
        Node *h = head;

        lastNode->next = head->next;
        head->next->prev = lastNode;

        head = head->next;

        delete  h;
    }
}

void CDL::deleteEnd(){

    if(head == NULL){
        cout<<"empty";
        return;
    }
    if (head->next == head) { 
        delete head;
        head = NULL;
        return;
    }
    Node *lastNode = head->prev;
    Node *secondlastNode = head->prev->prev;

    secondlastNode->next = head;
    head->prev = secondlastNode;

    delete lastNode;
}

void CDL::searching(int num){

    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    Node *h = head;

    do{
        if(h->data == num){
            cout<<"Found"<<endl;
        }
        h = h->next;
    }while(h != head);

    cout<<"Not Found"<<endl;
}

void CDL::minimum(){

    if (head == NULL) {
        cout << "List is Empty" << endl;
        return;
    }

    

    int min = head->data;
    Node *h = head;

    do{
        if(h->data < min ){
            min = h->data;
        }
        h = h->next;
    }while(h != head);

    cout<<"Minimum: "<<min<<endl;

}

void CDL::maximum(){

    if(head == NULL){
        cout<<"List is empty";
        return;
    }

    
    int max = head->data;

    Node *h = head;

    do{
        if(h->data > max){
            max = h->data;

        }
        h = h->next;
    }while (h != head);

    cout<<"Maximum: "<<max<<endl;
    
}


void CDL::print(){

    if(head == NULL){
        cout<<"empty";
    }else{
        Node *h = head;
        do
        {
            cout<<h->data<<endl;
            h = h->next;
        
        } while (h != head );
        
    }
}


int main() {

    CDL li;

    li.insertAtHead(20);
    li.insertAtEnd(10);

    // li.deleteHead();
    // li.deleteEnd();

    li.searching(1);
    li.minimum();
    li.maximum();

    li.print();


    return 0;
}