#include<iostream>
#include<stack>
using namespace std;

void reverseArrayUsingStack(int arr[], int size){
    stack<int> stack;

    for(int i = 0; i < size; i++) {
        stack.push(arr[i]);
    }

    for(int i = 0; i < size; i++) {
        arr[i] = stack.top();
        stack.pop();
    }
}

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseArrayUsingStack(arr, size);

    for(auto x : arr) cout << x << " ";
    
    return 0;
}

/*
Time Complexity = O(n)
Auxiliary Space Complexity: O(n)
*/