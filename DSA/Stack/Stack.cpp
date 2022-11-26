#include <iostream>
using namespace std;

class Stack{
    public:
    
    int A[1000];
    int end;

    Stack(){
        end=0;
    }

    void push(int val){
        A[end] = val;
        end++;
    }

    void pop(){
        end--;
    }

    int size(){
        return end;
    }

    int top(){
        return A[end-1];
    }

    bool isEmpty(){
		if(end==0){
            cout<<"Empty"<<endl;
		    return true;
        }
        else{
            cout<<"Not Empty"<<endl;
		    return false;
        }
	}

};

int main(){

    Stack s;
    s.push(10);

    cout<<"size:"<<s.size()<<endl;
    cout<<"top:"<<s.top()<<endl;
    cout<<endl;

    s.push(20);

    cout<<"size:"<<s.size()<<endl;
    cout<<"top:"<<s.top()<<endl;
    cout<<endl;

    s.push(40);

    cout<<"size:"<<s.size()<<endl;
    cout<<"top:"<<s.top()<<endl;
    cout<<endl;

    s.pop();

    cout<<"size:"<<s.size()<<endl;
    cout<<"top:"<<s.top()<<endl;
    cout<<endl;

    s.isEmpty();
  
  return 0;
}