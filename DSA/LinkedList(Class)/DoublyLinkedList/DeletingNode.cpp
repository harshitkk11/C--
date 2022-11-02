#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
        this ->prev = NULL;
    }
};

void insertNodeAtHead(Node* &head, Node* &tail, int data){
    // If Linked List is empty
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp ->next = head;
        head ->prev = temp;
        head = temp;
    }
}

void insertNodeAtTail(Node* &head, Node* &tail, int data){
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail ->next = temp;
        temp ->prev = tail;
        tail = temp;
    }
}

void insertNodeAtAnyPosition(Node* &head, Node* &tail, int data, int position){
    if(position == 1){
        insertNodeAtHead(head, tail, data);
        return;
    }
    Node* temp = head;
    int count = 1;
    while (count < position-1)
    {
        temp = temp ->next;
        count++;
    }
    if(temp->next == NULL){
        insertNodeAtTail(head, tail, data);
        return;
    }
    Node* newnode = new Node(data);
    newnode ->next = temp ->next;
    temp ->next ->prev = newnode;
    temp ->next = newnode;
    newnode ->prev = temp;
    temp = newnode;
    
}

void deleteNode(Node* &head, Node* &tail, int position){
    if (position == 1){
    







    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){









    }
}

void printLinkedList(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp -> data<<endl;
        temp = temp->next;
    }
    
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertNodeAtHead(head, tail, 12);
    insertNodeAtTail(head, tail, 20);
    

    insertNodeAtAnyPosition(head, tail, 30,2);
    cout << "head" << head->data << endl;
    cout << "tail" << tail->data << endl;

    printLinkedList(head);

    return 0;
}
