#include<bits/stdc++.h>
using namespace std;

void print(vector<int>A){
    for(int i = 0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void sort(vector<int>&A){
    for(int i=0; i<A.size()-1; i++){
        int min_indx = i;
        for(int j=1;j<A.size(); j++){
            if(A[min_indx]>A[j]){
                min_indx = j;
            }
        }
    }
}

int main(){
    vector<int>A = {5,2,4,6,3,5,1,3,6,4,7};
    // print(A);

    // sort(A);

    return 0;
}