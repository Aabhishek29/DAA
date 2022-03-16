#include<iostream>

using namespace std;

bool isSame(int a[],int b[]){
    int i;
    for(i=0;i<256;i++)
    {
        if(a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}


bool findAnagram(string a,string b){
    int i,counta[256]={0},countb[256]={0};
    for(int i=0;i<a.size();i++){
        counta[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        counta[b[i]]++;
    }
    for(i=b.size();i<a.size();i++){
        if(isSame(counta,countb))
            return true;
        counta[a[i]]++;
        counta[a[i-b.length()]]--;
    }
    return false;
}


int main(){
    string s = "graphic era";
    string p = "pra";
    cout<<findAnagram(s,p);
}