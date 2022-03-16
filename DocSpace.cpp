#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

vector<int> result1,result2;

void Answer(vector<int>& arr,int i,int n,int m1,int m2,int& res,int t1,int t2,vector<int>& arr1,vector<int>& arr2)
{
    if(i==n)
    {
        if(max(t1*m1,t2*m2) < res)
        {
            result1.clear();
          int t = arr1.size();
          int tpp =  arr2.size();
            for(int i=0;i<t;i++)
                result1.push_back(arr1[i]);
            result2.clear();
            for(int i=0;i<tpp;i++)
                result2.push_back(arr2[i]);

            res=max(t1*m1,t2*m2);
        }
        return;
    }

    arr1.push_back(arr[i]);
    Answer(arr,i+1,n,m1,m2,res,t1+arr[i],t2,arr1,arr2);
    arr1.pop_back();

    arr2.push_back(arr[i]);
    Answer(arr,i+1,n,m1,m2,res,t1,t2+arr[i],arr1,arr2);
    arr2.pop_back();
}
int main()
{
   int t1,t2,n;
   cin>>t1;
   cin>>t2;
   cin>>n;
   vector<int> list;
   for(int i=0;i<n;i++)
   {
       int temp;
       cin>>temp;
       list.push_back(temp);
   }
   int final_limit=2147483647;
   result1.clear(); result2.clear();
   vector<int> a0;
   vector<int> aa;

   Answer(list,0,n,t1,t2,final_limit,0,0,a0,aa);

  int size = result1.size();
   for(int i=0;i<size;i++)
    cout<<result1[i]<<" ";

	int size2 = result2.size();
   for(int i=0;i<size2;i++)
    cout<<result2[i]<<" ";
}