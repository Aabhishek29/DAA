/*
Print the Pattern using Recursion

1 + 2^2 + 3^3 + 4^4 + 5^5 + ... + n^n
*/

#include<iostream>
#include<math.h>
using namespace std;

void pattern(int n){
    if(n==2)
        return;
    else{
        pattern(--n);
        cout<<" + "<<pow(n,n);
    }
}

int main(){
    int n;
    cin>>n;
    cout<<"1";
    pattern(n+1);
}