#include <iostream>
using namespace std;

// Node class
class Node{
    public:
    int data;
    Node* next;

    // Constructor
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
};

// Creating node and inserting at head
void InsertNodeAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp ->next = head;
    head = temp;
}

// Printing Linked List
void printLinkedList(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp ->data<<endl;
        temp = temp ->next;

    }
    
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    InsertNodeAtHead(head, 20);
    InsertNodeAtHead(head, 30);

    printLinkedList(head);

    return 0;
}