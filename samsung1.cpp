#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int num;
    cin>>num;
    int ans = 0;
    while(num>0){
        ans = ans*10 + abs(num%10-9);
        num/=10;
    }
    while(ans>0){
        num = num*10 + (ans%10);
        ans/=10;
    }
    cout<<num<<endl;
    return 0;
}