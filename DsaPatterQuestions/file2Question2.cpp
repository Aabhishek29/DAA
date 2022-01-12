/*
Q.2 Write a Program to print the Fibonacci Half Pyramid Pattern.
1 
1 2
3 5 8
13 21 34 55
89 144 233 377 610
*/

#include<iostream>

using namespace std;

int main(){
    int a=0,b=1,c=1;
    for(int i=1;i<=5;i++){
        for(int j=0;j<i;j++){
            cout<<c<<" ";
            c = a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
}