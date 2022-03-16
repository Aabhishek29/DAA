#include <bits/stdc++.h>
using namespace std;
  
string solution(string str1,string str2)
{
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    vector<string> s1;
    string s2="";
    int j=0;
    vector<int>c1(256,0);
  int y1 = str1.size();
     for(int k=0;k<y1;k++)
        {
            c1[str1[k]]++;
            if(c1[str1[k]]>1){
                 return "New Language Error";}
        }
    string temp;
  int y2 = str2.size();
    for(int i=0;i<y2;i++)
    {
        if(str2[i]==' '){
            if (temp!="")
            s1.push_back(temp);
            temp="";
            
        }
        else{
            temp+=str2[i];
        }
    }
    s1.push_back(temp);
    vector<vector<int>> count(s1.size(),vector<int>(256,0));
  int y3 = s1.size();
    for( int i=0;i<y3;i++)
    {
        if(i>0) s2+=" ";
      int y4 = s1[i].size();
        for(int j=0;j<y4;j++){
        
        count[i][s1[i][j]]++;
        }
      int y5 = str1.size();
        for(int k=0;k<y5;k++)
        {
            if(count[i][str1[k]]>0){
                for(int l=0;l<count[i][str1[k]];l++)
                    s2  += str1[k];
            }
        }
    }
    
    if(s2.empty())      return "New Language Error";    
    return s2;

}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string s = solution(s1,s2);
    cout<< s;
    return 0;
}