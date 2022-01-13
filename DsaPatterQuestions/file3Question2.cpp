/*
Print the sum of the following pattern

1 + (1+2) + (1+2+3) + (1+2+3+4) + ......... + (1+2+3+4+...+n)

*/

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        cout<<"( ";
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
            if(j+1<=i)
                cout<<" + ";
            sum += j;
        }
        cout<<" ) ";
        if(i<n)
            cout<<" + ";
        ans += sum;
    }
    cout<<endl<<ans<<endl;
}