#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this ->data = data;
        this ->next = NULL;
        this ->prev = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head ->prev = temp;
    head = temp;
}

void insertAtTail(Node* tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtAnyPosition(Node* &head,Node* &tail, int data, int position){
    if(position ==1){
        insertAtHead(head, data);
    }
    else{
        Node* temp = head;
        int count = 1;
        while (count < position-1)
        {
            temp = temp->next;
            count++;
        }
        if(temp->next == NULL){
            insertAtTail(tail, data);
        }
        else{
            Node* newNode = new Node(data);

            newNode->next = temp->next;
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    
}

void printLinkedList(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 20);

    insertAtAnyPosition(head, tail, 30, 3);

    printLinkedList(head);

    return 0;
}