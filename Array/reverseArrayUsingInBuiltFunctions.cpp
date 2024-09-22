#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[] = {2, 4, 6, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    reverse(arr, arr + size);   // + size moves the arr pointer to last location then swapping

    for(auto x:arr) cout<<x<<" ";

    return 0;
}