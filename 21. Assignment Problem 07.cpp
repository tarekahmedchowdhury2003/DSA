#include <iostream>
using namespace std;

struct Node {
    Node *next;
    int data;
};

void creatlist(Node*& head, int n) {
    if (n == 0) return; 

    cin >> head->data;
    head->next = NULL;
    
    Node *h = head;

    for (int i = 1; i < n; i++) { 
        
        Node *temp = new Node();
        cin >> temp->data;
        temp->next = NULL;
        h->next = temp;
        h = temp;
    }
}

void display(Node *head) {
    if (head == NULL) {
        cout << "Not yet " << endl;
    } else {
        while (head != NULL) {
            cout << head->data << " ";  
            head = head->next;       
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    Node* head = new Node();  
    creatlist(head, n);       
    display(head);           

    return 0;
}
