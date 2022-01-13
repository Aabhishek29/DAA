/*
Q. Write the programs to find the sum of the series given below:

	1 + 1/(2*2) + 1/(3*3) + 1/(4*4) + ……. + 1/(n*n)
*/

#include<iostream>

using namespace std;

double sum(int n,int ans){
    if(n==1)
        return ans;
    else{
        ans += 1/(n*n);
        cout<<1/(n*n);
        return sum(n-1,ans);
    }
}

int main(){
    int n;
    cout<<"Enter Iterations:"<<endl;
    cin>>n;
    cout<<sum(n,0)<<endl;
}