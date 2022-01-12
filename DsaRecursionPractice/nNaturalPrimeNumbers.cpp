/*
Print n Prime natural numbers using recursion
*/

#include<iostream>

using namespace std;

bool isPrime(int num){
    int flag=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
            flag++;
    }
    if(flag==2)
        return true;
    else
        return false;
}

void naturalNumbers(int n){
    if(n==0)
        return ;
    else
    {
        naturalNumbers(--n);
        if(isPrime(n+1))
            cout<<n+1<<" "; 
    }
}

int main(){
    int n;
    cin>>n;
    naturalNumbers(n);
}