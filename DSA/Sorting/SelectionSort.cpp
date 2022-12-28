#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>A = {5,4,8,10,1};

    for (int i=0; i<A.size(); i++){
        for(int j=i+1; j<A.size();j++){
            int temp;
            if(A[i] > A[j]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }

    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
        
    return 0;
}