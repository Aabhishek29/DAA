/*
print n natural numbers using recursion in reverse
*/

#include<iostream>

using namespace std;

void naturalNumbers(int n){
    if(n==0)
        return ;
    else
    {   cout<<n<<" ";
        naturalNumbers(--n);
    }
}

int main(){
    int n;
    cin>>n;
    naturalNumbers(n);
}