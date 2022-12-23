#include<bits/stdc++.h>
using namespace std;

void print_arr(vector<int>A){
    for(int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&A){
    for(int i=0; i<A.size()-1; i++){
        for(int j=i+1;j<A.size(); j++){
            if(A[i]>A[j]){
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
        print_arr(A);
    }
}

int main(){
    vector<int>A = {5,2,4,6,3,5,1,3,6,4,7};
    print_arr(A);

    sort(A);

    return 0;
}