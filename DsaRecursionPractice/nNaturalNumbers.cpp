/*
print n natural numbers using recursion
*/

#include<iostream>

using namespace std;

int naturalNumbers(int n){
    if(n==1)
        return 1;
    else
        return (n + naturalNumbers(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<naturalNumbers(n);
}