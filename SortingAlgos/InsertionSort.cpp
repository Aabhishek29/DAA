/*
3. Given an unsorted array of n integers, write a program to sort the array using insertion sort.
*/

#include<iostream>
#include<algorithm>

using namespace std;

void insertionSort(int *arr, int a){
    for(int i=0;i<a;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
}