#include<iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    if(start >= end) return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    reverseArray(arr, start+1, end-1);
}

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = size - 1;

    reverseArray(arr, start, end);

    for(auto x:arr) cout<<x<<" ";
    
    return 0;
}

/*
Time Complexity = O(n)
Auxiliary Space Complexity: O(n) for non in-place, O(log n) for in-place (due to recursion stack).
*/