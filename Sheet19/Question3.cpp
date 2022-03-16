/*
3.	Write a program to test if two given String is a rotation of each other or not, e.g. if 
the given String is "XYZ" and "ZXY" then your function should return true, but if the input is
 "XYZ" and "YXZ" then return false.
 */

#include<iostream>

using namespace std;

bool checkRoatate(string a,string b){
    int arr[26] = {0},brr[26] = {0};
    for(int i=0;i<a.size();i++)
        arr[a.size()-97]++;
    for(int i=0;i<b.size();i++)
        brr[b.size()-97]++;
    
}

int main(){
    string str1,str2;
    cin>>str1;
    cin.ignore();
    cin>>str2;
    cout<<checkRoatate(str1,str2);
    return 0;
}