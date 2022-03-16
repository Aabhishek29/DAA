#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}

int tD(string str, int base)
{
    int len = str.size();

    int power = 1;

    int num = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (val(str[i]) >= base) {
            printf("Invalid Number");
            return -1;
        }
        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
}

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
string fD(int base, int inputNum)
{
    string res = "";

    while (inputNum > 0) {

        res += reVal(inputNum % base);

        inputNum /= base;
    }

    reverse(res.begin(), res.end());

    return res;
}

vector<int> cB(string s, int a, int b)
{

    int num = tD(s, a);

    string ans = fD(b, num);
    //cout<<ans<<" ";
    reverse(ans.begin(),ans.end());
    vector<int> arr(ans.size());
    int i = 0;
    while(i<ans.size()){
        arr[i] = ans[i]-'0';
        i++;
    }
    return arr;
}
vector<int> solution(vector<bool> base){
    int a = 2, b =6;
    string s = "";
    int i = base.size()-1;
    //cout<<i<<" ";
    while(i>=0){
        if(base[i])
            s+='1';
        else
            s+='0';
        i--;
    }
    cout<<s<<" ";
    vector<int> arr;
    arr = cB(s, a, b);
    return arr;
}

int main()
{
   int n;
   cin>>n;
    vector<bool> base;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
       base.push_back(val);
    }

    vector<int>arr=solution(base);
    int s= arr.size();
 for(int i=0;i<s;i++)
    {
        cout<<arr[i];
    }
    
  return 0;
}