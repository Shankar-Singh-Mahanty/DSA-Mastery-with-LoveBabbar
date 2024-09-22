#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size-1;

    reverseArray(arr, start, end);
    for(auto x:arr){
        cout<<x<<" ";
    }

    return 0;
}