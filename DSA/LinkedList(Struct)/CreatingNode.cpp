#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node *Node1 = new Node();
    Node1->data = 10;
    Node1->next = NULL;

    cout<<Node1->data<<endl;
    cout << Node1->next << endl;
}