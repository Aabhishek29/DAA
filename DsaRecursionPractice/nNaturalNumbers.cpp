/*
print n natural numbers using recursion
*/

#include<iostream>

using namespace std;

void naturalNumbers(int n){
    if(n==0)
        return ;
    else
    {
        naturalNumbers(--n);
        cout<<n+1<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    naturalNumbers(n);
}