// Time complexity = O(n)*O(n) = O(n^2)
// O(n) for first loop to select elements one by one
// O(n) for second loop to compare elements with each other

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int>A = {5,4,8,10,0};

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