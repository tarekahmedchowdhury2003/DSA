#include <iostream>
using namespace std;

struct Node{
  Node *next;
  int data;
  
  Node(int d){
      data = d;
      next = NULL;
  }
  
};

struct SLL{
  Node *head = NULL;
  void insertAtHead(int d);
  void insertAtEnd(int d);
  void insertAtAnypos(int pos,int d);
  void print();
  
};

void SLL::insertAtHead(int d){
    Node *temp = new Node(d);
    
    if(head == NULL){
        head = temp;
    }else {
        temp->next = head;
        head = temp;
    }
}

void SLL::insertAtEnd(int d){
    Node *temp = new Node(d);
    if(head == NULL){
        head = temp;
    }else {
        Node *h = head;
        while(h->next != NULL){
            h = h->next;
        }
        h->next = temp;
       
        
    }
}


void SLL::insertAtAnypos(int pos, int d){
    Node *temp = new Node(d);
    Node *h = head;
    
    for(int i=2; i<pos; i++){
        h = h->next;
    }
    
    Node *g = h->next;

    h->next = temp;
    temp->next = g;
    
    
}
void SLL::print(){
    
    if(head == NULL){
        cout<<"List is empty"<<"\n";
    }else {
        Node *h = head;
        while(h != NULL){
            cout<<h->data<<endl;
            h = h->next;
        }
    }
    
}


int main() {
    
    SLL li;
    
    li.insertAtHead(30);
    li.insertAtHead(20);
    li.insertAtHead(10);
    li.insertAtEnd(50);
    
    li.insertAtAnypos(2,60);
    li.print();
    
    return 0;
}
