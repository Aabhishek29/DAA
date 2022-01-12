/*
Print the Pattern using Recursion

1 + 1/3 + 1/9 + 1/27 + 1/81 + ... + 1/3^n
*/

#include<iostream>
#include<math.h>
using namespace std;

void pattern(int n){
    if(n==1)
        return;
    else{
        pattern(--n);
        cout<<"+ 1"<<"/"<<pow(3,n);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"1 ";
    pattern(n);
}