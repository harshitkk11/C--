#include <iostream>
using namespace std;

// Node class
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
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
void insertNodeAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Deleting a node
void deleteNode(Node* &head, Node* &tail, int position){
    // If node is head node
    if(position == 1){
        Node* temp = head;
        head = head ->next;
        temp->next = NULL;
        delete temp;
    }

    else
    {
        // Traverse node to position
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr -> next;
            count++;
        }

        // If node is tail node(last node)
        if(curr->next == NULL){
            prev->next = curr->next;
            delete curr;
            tail = prev;
            return;
        }

        // Deleting node at a position
        prev ->next = curr ->next;
        curr ->next = NULL;
        delete curr;
    }
    

}

// Traversiing Linked List
void printLinkedList(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        cout << temp->next << endl;
        temp = temp->next;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    insertNodeAtTail(tail, 20);
    insertNodeAtTail(tail, 30);
    insertNodeAtTail(tail, 40);

    deleteNode(head, tail, 1);

    printLinkedList(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}