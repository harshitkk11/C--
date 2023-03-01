#include<iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int left_len = mid-start+1;
    int right_len = end-mid;
    int *leftarray = new int [left_len];
    int *rightarray = new int[right_len];

    int arr_index = start;
    for(int i=0; i<left_len; i++){
        leftarray[i] = arr[arr_index++];
    }
    arr_index = mid+1;
    for(int j=0; j<right_len; j++){
        rightarray[j] = arr[arr_index++];
    }

    int index1 = 0;
    int index2 = 0;
    arr_index = start;

    while(index1 < left_len && index2 < right_len){
        if(leftarray[index1] < rightarray[index2]){
            arr[arr_index++] = leftarray[index1++];
        }
        else{
            arr[arr_index++] = rightarray[index2++];
        }
    }

    while(index1 < left_len){
        arr[arr_index++] = leftarray[index1++];
    }

    while(index2 < right_len){
        arr[arr_index++] = rightarray[index2];
    }

    delete []leftarray;
    delete []rightarray;
}

void mergesort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = end + (end - start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid+1, end);
    merge(arr, start, mid, end);

}

int main(){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    mergesort(arr, 0, n-1);

    for(int j=0; j<n; j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}