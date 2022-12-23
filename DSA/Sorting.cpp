#include<bits/stdc++.h>
using namespace std;

void print(vector<int>A){
    for(int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&A){
    for(int j=0; j<A.size()-1; j++){
        for(int i=1; i<A.size(); i++){

            if(A[j]>A[i]){
                int temp = A[j];
                A[j] = A[i];
                A[i] = A[j];
            }
            
        }
        print(A);
    }
}

int main(){
    vector<int>A = {5,2,4,6,3,5,1,3,6,4,7};
    print(A);

    // sort(A);

    return 0;
}