#include<iostream>
using namespace std;
int binarySearch(int* ,int ,int ,int );
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n;i++){
    cin>>arr[i];
  }
  int key;
  cin>>key;
  cout<<binarySearch(arr ,n ,key, 0)- binarySearch(arr ,n, key, 1)+1;
  return 0;
}

int binarySearch(int* arr, int n, int key, int check){
    int high=n-1, low=0, result=-1;
    int mid;
    mid= low+ (high-low)/2;

    if(arr[mid]==key){
        result=mid;
    
    if(check){
        high= mid-1;
    }
    else{
        low= mid+1;
    }
}
    else if(key<arr[mid]){
    high= mid-1;
    
}
else{
    low= mid+1;
}
}