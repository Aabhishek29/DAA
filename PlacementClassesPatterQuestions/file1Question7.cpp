/*
Q.7 Write a Program to print the Solid Half Diamond Number Pattern.	
5
54
543
5432
54321
543210
54321
5432
543
54
5
*/

#include<iostream>

using namespace std;

int main(){
    for (int i = 0; i <= 5; i++)
    {
        int count = 5;
        for(int j = 0; j <= i; j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        int count = 5;
        for(int j=0;j<5-i;j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
    return 0;
}