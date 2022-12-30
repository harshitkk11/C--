#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>A){
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void Selection_Sort(vector<int>A){
    // Time complexity = O(n)*O(n) = O(n^2)
    // O(n) for first loop to select elements one by one
    // O(n) for second loop to compare elements with each other
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
    print(A);
}

void Bubble_Sort(vector<int>A, int n){
    if(n == 0){
        print(A);
        return;
    }

    for(int i=0; i<A.size()-1; i++){
        if (A[i] > A[i+1]){
            int temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
    Bubble_Sort(A, n-1);
}

int main(){
    vector<int>A = {5,4,8,10,1};

    Selection_Sort(A);
    Bubble_Sort(A, A.size());

    return 0;
}