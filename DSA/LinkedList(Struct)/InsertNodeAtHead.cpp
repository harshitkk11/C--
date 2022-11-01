#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *CreateNode(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insertNodeAtHead(Node* &head, int data){
    Node* temp = CreateNode(data);
    temp->next = head;
    head = temp;
}

void printLinkedList(Node* &head){
    while (head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
    
}

int main()
{
    Node *head = CreateNode(10);

   insertNodeAtHead(head, 12);
   insertNodeAtHead(head, 15);
   insertNodeAtHead(head, 20);

   printLinkedList(head);

    return 0;
}