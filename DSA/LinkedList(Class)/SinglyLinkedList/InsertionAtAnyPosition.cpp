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
void insertNodeAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Creating node and inserting at tail
void insertNodeAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail ->next = temp;
    tail = temp;
}

// Creating node and inserting at any position
void insertNodeAtPosition(Node* &head,Node* &tail, int data, int position){
    // if node has to place at head
    if(position ==1){
        insertNodeAtHead(head, data);
        return;
    }
    
    Node* temp = head;
    int count = 1;

    // traverse node upto position
    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // if position is of last node, new node will be placed at tail
    if(temp->next == NULL){
        insertNodeAtTail(tail, data);
        return;
    }

    // after traversing to the position place the node at that position
    Node* newNode = new Node(data);
    newNode ->next = temp->next;
    temp ->next = newNode;

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

    insertNodeAtPosition(head,tail, 8, 1);
    insertNodeAtPosition(head,tail, 15, 3);
    insertNodeAtPosition(head,tail, 18, 4);
    insertNodeAtPosition(head,tail, 33, 7);
    insertNodeAtPosition(head, tail, 100, 9);

    printLinkedList(head);

    cout<<"head "<<head->data<<endl;
    cout << "tail " << tail->data << endl;

    return 0;
}