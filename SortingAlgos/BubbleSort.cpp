/*
1. Given an unsorted array of n integers, write a program to sort the array using bubble sort.
*/

#include<iostream>

using namespace std;

void bubbleSort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                swap(*(arr+j),*(arr+j+1));
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter Size of array:"<<endl;
    cin>>n;
    cout<<"Enter Elements:"<<endl;
    int *arr  = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
}