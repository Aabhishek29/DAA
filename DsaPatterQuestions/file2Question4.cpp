/*

Q.4 Given the value of n, print the arrow pattern. 
Input: n = 5
Output: 
 *
  **
   ***
    ****
     *****
    ****
   ***
  **
 *

*/

#include<iostream>

using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"  ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<"  ";
        }
        for(int j=5;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}