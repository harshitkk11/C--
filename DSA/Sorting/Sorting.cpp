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
    // Worst and Average Case Time Complexity: O(N2). The worst case occurs when an array is reverse sorted.
    // Best Case Time Complexity: O(N). The best case occurs when an array is already sorted.
    // Auxiliary Space: O(1)
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

void Insertion_Sort(vector<int> &A){
    int i, j, key;

    for(i=1; i<A.size(); i++){
        key = A[i];
        j = i - 1;

        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }

    print(A);
}

int main(){
    vector<int>A = {5,4,8,10,1};

    Selection_Sort(A);
    Bubble_Sort(A, A.size());
    Insertion_Sort(A);

    return 0;
}