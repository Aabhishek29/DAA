#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> exp;
    int n; //no. of lines
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string t;
        getline(cin,t);
        exp.push_back(t);
    }
    return 0;
}
