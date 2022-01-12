/*
print n even natural numbers using recursion
*/

#include<iostream>

using namespace std;

void naturalNumbers(int n){
    if(n==0)
        return ;
    else
    {
        naturalNumbers(--n);
        if((n+1)%2==0)
            cout<<n+1<<" "; 
    }
}

int main(){
    int n;
    cin>>n;
    naturalNumbers(n);
}