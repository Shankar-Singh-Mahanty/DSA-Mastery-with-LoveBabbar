#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int reverse[size];

    for(int i=0; i<size; i++){
        reverse[i] = arr[size - i - 1];
    }

    for(auto x:reverse){
        cout<<x<<" ";
    }
    return 0;
}