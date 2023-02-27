#include<iostream>
using namespace std;

int main(){
    cout<<"enter no of elements you want to enter";
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    for(int i=0;i<x-1;i++){
        cout<<arr[i];
    }
    // arr[i] = *(arr+i), i[arr] = *(i+arr),   arr[] = *arr,  int* i = new int,   int* arr = new int[5],  delete i,   delete []arr
    
}