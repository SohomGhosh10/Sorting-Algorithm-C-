#include<iostream>
using namespace std;
int binarySearch(int* ,int ,int);
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        int arr[i];
    }

    int key;
    cin>>key;
    cout<<binarySearch(arr ,n ,key);
    return 0;
}

int binarySearch(int* arr, int n, int key){
    int low=0,high=n-1;
    int mid;
    mid= low+ (high-low)/2;

    if(arr[mid]==key){
        return mid;
    }

    else if(key<arr[mid]){
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    
}