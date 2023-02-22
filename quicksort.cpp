#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    //placing pivot at right position
    int pivotindex = s + cnt;
    swap(arr[pivotindex],arr[s]);
    // left and right part sahi karo
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[],int s,int e){
    // base case
    if(s>=e){
        return;
    }
    //partition time
    int p = partition(arr,s,e);
    //left sorting
    quicksort(arr,s,p-1);
    //right sorting
    quicksort(arr,p+1,e);
}
int main(){
    cout<<"enter the number of elements you want to enter";
    int x;
    cin>>x;
    int arr[x];
    cout<<"enter "<<x<<" no of elements";
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
   // int arr[10] = {1, 8, 4, 5, 5, 6, 7, 36, 55, 10};
   // int n = 10;

    quicksort(arr,0,x-1);
    for(int i=0;i<x;i++){
        cout<< arr[i] <<" ";
    } cout<<endl;
    return 0;
    // not stable
}