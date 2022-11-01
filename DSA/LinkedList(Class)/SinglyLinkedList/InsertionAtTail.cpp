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

// Creating node and inserting at tail
void insertNodeAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}

// Printing Linked List
void printLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        temp = temp->next;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node *head = node1;
    Node* tail = node1;
    insertNodeAtTail(tail, 20);
    insertNodeAtTail(tail, 30);
    insertNodeAtTail(tail, 40);

    printLinkedList(head);
    return 0;
}