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

void insertNodeAtTail(Node* &tail, int data)
{
    Node *temp = CreateNode(data);
    tail->next = temp;
    tail = temp;
}

void printLinkedList(Node *&head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node* head = CreateNode(10);
    Node* tail = head;

    insertNodeAtTail(tail, 12);
    insertNodeAtTail(tail, 15);
    insertNodeAtTail(tail, 20);

    printLinkedList(head);

    return 0;
}