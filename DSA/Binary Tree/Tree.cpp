#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data = data;
            this->left = nullptr;
            this->right = nullptr;
        }
};

class BinaryTree{
    public:
        Node* root;

        BinaryTree(){
            root = nullptr;
        }
};

main(){
    return 0;
}