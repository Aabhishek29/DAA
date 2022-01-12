/*
Q.4 Write a Program to print the Full Pyramid Star pattern.
    *  
   * * 
  * * *
 * * * *
* * * * *
*/

#include<iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout<<"  ";
        }
        for(int k=0;k<=i*2;k++){
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
    
}