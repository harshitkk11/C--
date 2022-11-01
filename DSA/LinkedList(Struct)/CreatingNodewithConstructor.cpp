#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *CreateNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}

int main()
{
    Node *Node1 = CreateNode(10);

    cout << Node1->data << endl;
    cout << Node1->next << endl;

    return 0;
}