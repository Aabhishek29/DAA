/*
Print the Pattern using Recursion

1 + 1/2 + 1/4 + 1/8 + 1/16 + ... + n
*/

#include<iostream>
#include<math.h>
using namespace std;

void pattern(int n){
    if(n==1)
        return;
    else{
        pattern(--n);
        cout<<"+ 1"<<"/"<<pow(2,n);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"1 ";
    pattern(n);
}