/*
2.	Write a program to remove all the duplicate characters from a given input String, like, if the
given String is "Java" then the output should be "Jav". The second or further occurrence of duplicates
should be removed.
*/

#include<iostream>

using namespace std;

string removeDuplicate(string str){
    int mat[26] = {0};
    for(int i=0;i<str.size();i++){
        if(mat[str[i]-97]==0)
            mat[str[i]-97]++;
    }
    string ans = "";
    for(int i=0;i<str.size();i++){
        if(mat[str[i]-97]==1){
            ans+=str[i];
            str[i]--;
        }
    }
    return ans;
}

int main()
{
    string str;
    cin>>str;
    cout<<removeDuplicate(str);
    return 0;
}