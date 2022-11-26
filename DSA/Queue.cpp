#include <iostream>
using namespace std;

class Queue
{
    int A[5];
    int end;
    int start;
public:
    Queue(){
        end = 0;
        start = 0;
    };

     void push(int val){
        if(end == sizeof(A) && (end-start) == 1){
            A[0] = A[start];
            start = 0;
            end = 1;
        }
        else{
            A[end] = val;
            end++;
        }
    }

    void pop(){
        start++;
    }

    int size(){
        return (end - start);
    }

    int front(){
        return A[start];
    }

    bool isEmpty(){
		if((end-start)==0){
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
    Queue que;
    que.push(1);

    cout<<"size:"<<que.size()<<endl;
    cout<<"front:"<<que.front()<<endl;
    cout<<endl;

    que.push(2);

    cout<<"size:"<<que.size()<<endl;
    cout<<"front:"<<que.front()<<endl;
    cout<<endl;

    que.push(3);

    cout<<"size:"<<que.size()<<endl;
    cout<<"front:"<<que.front()<<endl;
    cout<<endl;

    que.push(4);

    cout<<"size:"<<que.size()<<endl;
    cout<<"front:"<<que.front()<<endl;
    cout<<endl;

    que.push(5);

    cout<<"size:"<<que.size()<<endl;
    cout<<"front:"<<que.front()<<endl;
    cout<<endl;

    // que.pop();

    // cout<<"size:"<<que.size()<<endl;
    // cout<<"top:"<<que.top()<<endl;
    // cout<<endl;

    // que.isEmpty();
  return 0;
}