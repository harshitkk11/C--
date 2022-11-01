#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp ->next = head;
    head ->prev = temp;
    head = temp;
}

void printDoublyLinkedList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data<<endl;
        temp = temp ->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node* head = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

    printDoublyLinkedList(head);

    return 0;
}