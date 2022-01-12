/*
Q.6 Write a Program to print the Full Pyramid Number Pattern.
    1
   321
  54321
 7654321
987654321
*/

#include<iostream>

using namespace std;

int main()
{
    int count;
    for (int i = 0; i < 5; i++)
    {
        count = i*2+1;
        for (int k = 5; k > i; k--)
        {
            cout<<"  ";
        }
        
        for (int j = 0; j < i*2+1; j++)
        {
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
    
    return 0;
}
