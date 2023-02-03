#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> arr){
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};;
    print(arr);
    return 0;
}