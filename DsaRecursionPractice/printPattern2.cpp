/*
Print the Pattern using Recursion

1 + 2 + 4 + 8 + 16 + ... + 2^n
*/

#include<iostream>
#include<math.h>
using namespace std;

void pattern(int n){
    if(n==0)
        return;
    else
    {
        pattern(--n);
        cout<<pow(2,n)<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    pattern(n);
}