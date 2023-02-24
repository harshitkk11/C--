#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
        int A[5];
        int end;

        Stack(){
            end = 0;
        }

        void push(int data){
            A[end] = data;
            end++;
        }

        void pop(){
            end--;
        }

        int size(){
            return end;
        }
        
};

main(){
    Stack s;
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);
    s.push(1);

    s.size();

    return 0;
}