/*
4. Write a program to perform bubble sort on array of n integers and display the result after kth iteration.
*/

#include<iostream>

using namespace std;

int bubbleSort(int *arr, int n){
    int itr=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                itr++;
                swap(*(arr+j),*(arr+j+1));
            }
        }
    }
    return itr;
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
    int a = bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    cout<<"total Number of Iteration is:"<<a<<endl;
}