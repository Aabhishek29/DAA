/*
5. Write a program to perform insertion sort on array of n integers and display the result after kth iteration.
*/

#include<iostream>
#include<algorithm>

using namespace std;

int insertionSort(int *arr, int a){
    int itr = 0;
    for(int i=0;i<a;i++){
        int temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            itr++;
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    return itr;
}

int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>*(arr+i);
    }
    int a = insertionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    cout<<"total Number of Iteration is:"<<a<<endl;
}