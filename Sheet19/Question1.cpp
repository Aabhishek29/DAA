/*
1.	Write a program to return the maximum occurring character in the input string, e.g., if the
 input string is "Java" then the function should return 'a'.
*/

#include<iostream>

using namespace std;

char maxOccurance(string a){
    int mat[26] = {0};
    for(int i=0;i<a.size();i++){
        mat[a[i]-97]++;
    }
    int max = 0;
    int ans = 0;
    for(int i=0;i<26;i++){
        if(max<mat[i]){
            ans = i;
            max = mat[i];
        }
    }
    return ans+97;
}

int main()
{
    string a;
    cin>>a;
    cout<<maxOccurance(a);
}