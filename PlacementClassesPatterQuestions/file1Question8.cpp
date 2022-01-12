/*
Q.8 Write a Program to Print the Hollow Diamond Number Pattern.
    1    
   2 2
  3   3
 4     4
5       5
 4     4
  3   3
   2 2
    1
*/

#include<iostream>

using namespace std;

int main(){
    int count = 1;
    for(int i=1;i<=5;i++){
        for(int k=i;k<=5;k++)
            cout<<"  ";
        cout<<count;
        for (int k = 2; k < i*2; k++)
        {
            cout<<"  ";
        }
        cout<<count;
        count++;
        cout<<endl;
    }
}
