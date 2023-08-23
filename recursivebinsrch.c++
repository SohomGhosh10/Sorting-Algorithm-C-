#include<iostream>
using namespace std;
int binarySearch(int* , int, int, int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, 0, n-1, key);
}

int binarySearch(int* arr, int low, int high, int key){
    if(low>high){
        return -1;
    }
    int mid;
    mid= low+ (high-low)/2;
    if(key= arr[mid]){
        return mid;
    }
    if(key<arr[mid]){
        return binarySearch(arr, low, mid-1, key);
    }
    else{
        return binarySearch(arr, mid+1, high, key);
    }
}
