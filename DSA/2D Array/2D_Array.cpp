#include<iostream>
#include<vector>
using namespace std;

// void diagonals(vector<vector<int>> &arr){
//     for(int i=0; i<arr.size(); i++){
//         for(int j=0; j<arr[i].size(); j++){
//             if(i = j){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }

void print(vector<vector<int>> arr){
    int k=arr.size()-1;
    for(int i=0; i<arr[i].size(); i++){
        cout<<arr[i][k--]<<" ";
    }
}

int main(){
    vector<vector<int>> arr = {{1,2,3,4}, {2,4,6,8}, {3,5,7,9}};;
    print(arr);
    // diagonals(arr);
    return 0;
}