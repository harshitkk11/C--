#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>A = {5,4,8,10,1};

    for(int i=0; i<A.size(); i++){
        if (A[i] > A[i+1])
        {
            int temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
        
    }

    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}