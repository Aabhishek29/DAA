/*
6. Write a program to perform insertion sort on array of n integers and display the result after kth iteration.
*/

#include<iostream>

using namespace std;

int selectionSort(int *arr,int a){
    int count = 0;
    for(int i=0; i<a-1 ;i++){
        int midx = i;
        for (int j = i+1; j < a; j++)
        {
            if(arr[j]<arr[midx]){
                count++;
                midx = j;
            }
        }
        swap(arr[midx],arr[i]);
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    int a = selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    cout<<"total Number of Iteration is:"<<a<<endl;
}