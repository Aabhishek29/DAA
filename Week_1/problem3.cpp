/*
Given an already sorted array of positive integers, design an algorithm and implement it using a
program to find whether a given key element is present in the sorted array or not. For an array
arr[n], search at the indexes arr[0], arr[2], arr[4],.....,arr[2k] and so on. Once the interval (arr[2k]
< key < arr[ 2k+1] ) is found, perform a linear search operation from the index 2k
to find the element
key. (Complexity < O(n), where n is the number of elements need to be scanned for searching): 
*/

#include<iostream>

using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
        cin>>*(arr+i);
    int key;
    cin>>key;
    for (int i = 0; i < n; i+=2)
    {   c++;
        if(arr[i]==key)
        {
            cout<<"Found at:"<<i+1<<" and steps is:"<<c<<endl;
            break;
        }
        else{
            if(key<arr[i]){
                cout<<"found at:"<<i<<" and steps is:"<<c<<endl;
                break;
            }
        }
    }
    
}