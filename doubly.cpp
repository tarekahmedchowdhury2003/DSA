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

struct DLL{

    Node *head = NULL;

    void insertAtHead(int d);
    void insertAtEnd(int d);
    void insertAtAnypos(int d, int pos);


    void searching(int num);
    void maximum();
    void minimum();

    void deleteHead();
    void deleteEnd();
    void deleteAtAnyPos(int pos);

    void print();

};

void DLL::insertAtHead(int d){

    Node *newNode = new Node(d);

    if(head == NULL){
        head = newNode;

    }else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

}

void DLL::insertAtEnd(int d){

    Node *newNode = new Node(d);

    if(head == NULL){
        head = newNode;
    }else{
        Node *h = head;

        while(h->next != NULL){
            h = h->next;
        }
        h->next = newNode;
        newNode->prev = h;

    }

}


void DLL::insertAtAnypos(int d, int pos) {
    Node *newNode = new Node(d);

    if (pos == 1) {
        insertAtHead(d); 
        return;
    }

    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node *h = head;
    for (int i = 1; i < pos - 1 && h->next != NULL; i++) {
        h = h->next;
    }

    if (h->next == NULL) {
       
        h->next = newNode;
        newNode->prev = h;
    } else {
        
        Node *g = h->next;
        h->next = newNode;
        newNode->next = g;
        newNode->prev = h;
        g->prev = newNode;
    }
}

void DLL::deleteAtAnyPos(int pos) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (pos == 1) {
        deleteHead(); 
        return;
    }

    Node *h = head;

    for (int i = 1; i < pos && h != NULL; i++) {
        h = h->next;
    }

    if (h == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    if (h->next == NULL) {
        // If it's the last node
        h->prev->next = NULL;
    } else {
        // If it's a middle node
        h->prev->next = h->next;
        h->next->prev = h->prev;
    }

    delete h; 
}


void DLL::searching(int num){
    

    if(head == NULL){
        cout<<"List is empty";

    }else {
        Node *h = head;

        while(h != NULL){
            
            if(h->data == num){
                cout<<"Found"<<endl;
                return;
            }else{
                cout<<"Not Found"<<endl;
                return;
            }
            h = h->next;
        }

    }
}

void DLL::maximum(){
    

    if(head == NULL){
        cout<<"Empty";
        return;
    }

    int max = head->data;
    Node *h = head ;

    while(h != NULL){
        
        if(h->data > max){
            max = h->data;
        }
        h = h->next;
    }
    cout<<"Max: "<<max<<endl;
}


void DLL::minimum(){

    if(head == NULL){
        cout<<"List is empty";
        return;
    }

    int min = head->data;
    Node *h = head;

    while(h != NULL){
        if(h->data < min ){
            min = h->data;
        }
        h = h->next;
    }

    cout<<"Minimum: "<<min<<endl;
}

void DLL::deleteHead(){

    if(head == NULL){
        cout<<"List is empty";
        return;
    }
    Node *temp = head;
    head = head->next;

    if(head != NULL){
        head->prev = NULL;
    }

    delete temp;


    
}
void DLL::deleteEnd(){

   if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node *h = head;
    while (h->next->next != NULL) {
        h = h->next;
    }

    Node *temp = h->next;
    h->next = NULL;
    delete temp;
}

void DLL::print(){

    if(head == NULL){
        cout<<"List Is Empty";
    }else{
        Node *h = head;

        while(h != NULL){
            cout<<h->data<<" "<<endl;

            h = h->next;

        }
    }
}


int main() {

    DLL li;

    li.insertAtHead(10);    
    li.insertAtHead(20);
    li.insertAtHead(30);

    li.insertAtEnd(40);
    li.insertAtAnypos(100,1);

    li.searching(30);
    li.maximum();
    li.minimum();


    // li.deleteHead();
    // li.deleteEnd();

    li.deleteAtAnyPos(3);


    li.print();

    

    return 0;
}