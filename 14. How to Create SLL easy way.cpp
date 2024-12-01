#include <iostream>
using namespace std;

struct Node{
  Node *next;
  int data;
  
};

int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    
    head = new Node();
    second = new Node();   // Allocate memory for nodes 
    third = new Node();
    
    
    // Assign data and link nodes
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    
    Node *temp = head;
    while(temp != NULL){       // display 
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}
