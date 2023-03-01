#include<iostream>
using namespace std;

void sort(int arr[], int start){
    if(arr[0] > arr[sizeof(arr)-1]){
        cout<<"True"<<endl;
    }

}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    sort(arr, 0);
    return 0;
}