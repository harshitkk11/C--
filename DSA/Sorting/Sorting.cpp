#include <iostream>
#include <vector>
using namespace std;

void print(vector<int>A){
    for (int i = 0; i < A.size(); i++)
    {
        cout<<A[i]<<" ";
    }
}

void Selection_Sort(vector<int>A){
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

void Bubble_Sort(vector<int>A){

}

int main(){
    vector<int>A = {5,4,8,10,0};
    Selection_Sort(A);

    return 0;
}