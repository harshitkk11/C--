#include <iostream>
using namespace std;

// Creating Node class
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

int main(){
    // Creating node
    Node* node1 = new Node(20);

    cout<<node1 ->data<<endl;
    cout<<node1 ->next<<endl;

    return 0;
}