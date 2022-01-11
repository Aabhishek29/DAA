/*
Q.5 Write a program to Print a solid Diamond Star Pattern.
     *      
    * *     
   * * *    
  * * * *   
 * * * * *  
* * * * * * 
 * * * * *  
  * * * *   
   * * *    
    * *
     *
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
    for (int i = 0; i < 4; i++)
    {
        for(int k=0;k<=i*2;k++){
            cout<<" "<<" ";
        }
        for (int j = i; j < 4; j++)
        {
            cout<<"* ";
        }
        
        
        cout<<endl;
    }
    
    return 0;
}
