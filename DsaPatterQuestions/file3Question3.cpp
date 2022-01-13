/*
print the sum of the following pattern

1 - x2/2! + x4/4! – x6/6! + ….........
*/

#include<iostream>
#include<math.h>

using namespace std;

int fact(int n){
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    int count=0;
    float sum=0;
    for (int i = 0; i <= n; i+=2)
    {
        if(count%2==0)
            sum -= (pow(n,i)/fact(i));
        else
            sum += (pow(n,i)/fact(i));
        count++;
    }
    cout<<sum;
}