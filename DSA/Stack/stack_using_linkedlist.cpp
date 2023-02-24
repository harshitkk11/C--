#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int data){
            this->data = data;
            this->next = NULL;
        }

};

class Stack{
    public:
        Node* tail;
        int end;
        
        Stack(){
            tail = NULL;
            end = 0;
        }

        void push(int data){
            Node* newnode = new Node(data);
            
            newnode->next = tail;
            tail = newnode;
            end++;
        }

        int size(){
            return end;
        }
        
        void top(){
            cout<<tail->data;
        }

        void print(){
            while(tail != nullptr){
                cout<<tail->data<<" ";
                tail = tail->next;
            }
        }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.print();
    cout<<s.size()<<" ";
    s.top();
    return 0;
}
