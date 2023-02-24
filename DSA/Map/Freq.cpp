#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A) {
    unordered_map<int, int> freq;
    
    for(int i=0; i<A.size(); i++){
        freq[A[i]]++;
    }
    
    for(int i=0; i<A.size(); i++){
        if(freq[A[i]] > 1) return A[i];
    }
    
    return -1;
}

int main(){
    vector<int>A = {10, 5, 3, 4, 3, 5, 6};
    cout<<solve(A);
    return 0;
}