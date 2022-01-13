/*
2. Given an unsorted array of n integers, write a program to sort the array using selection sort.
*/

#include<iostream>

using namespace std;

void selectionSort(int *arr,int a){
    for(int i=0; i<a-1 ;i++){
        int midx = i;
        for (int j = i+1; j < a; j++)
        {
            if(arr[j]<arr[midx])
                midx = j;
        }
        swap(arr[midx],arr[midx]);
    }
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
}