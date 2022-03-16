#include<iostream>
#include<string>

using namespace std;

int strStr(string haystack, string needle) {
    int n = haystack.length();
    int m = needle.length();
    int count = 0;
    if(m==0)
        return 0;
    int j = 0,idx=0;
    for(int i=0;i<n;i++)
    {
        int t=i;
        for(j=0;j<m;j++)
        {
            if(haystack[i]==needle[j])
            {   
                // cout<<haystack[i]<<"   "<<needle[j];
                count++;
                if(count==1)
                    idx=i;
                i++;
            }else{
                count=0;
                break;
            }
        }
        i = t;
        // cout<<endl;
        if(j==m)
            break;
    }
    // cout<<count<<endl;
    if(count==m)
        return idx;
    return -1;
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<strStr(s1,s2);
    return 0;
}