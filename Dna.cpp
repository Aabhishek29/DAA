#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


void findAnswer(string str,int size){
    vector<char> s;
    for(int i=0;i<str.size();i++){
        s.push_back(str[i]);
    }
    vector<pair<int,int> > strand;
    vector<char> temp;
    int it = 0;
    while(s.size()!=1){
        strand.push_back({0,0});
        temp.insert(temp.begin(),s[0]);
        s.erase(s.begin());
        for(int i=0;i<temp.size();i++){
            if((temp[i]=='A' && s[i]=='T') || (s[i]=='A' && temp[i]=='T'))
                strand[it].first++;
            if((temp[i]=='G' && s[i]=='C') || (s[i]=='C' && temp[i]=='G'))
                strand[it].first++;
        }
        strand[it].second = temp.size();
        it++;
    }
    sort(strand.begin(),strand.end());
    cout<<strand[strand.size()-1].second<<" "<<strand[strand.size()-1].first<<endl;
}



int main(){
    int s;
    cin>>s;
    string str;
    cin>>str;
    findAnswer(str,s);
    return 0;
}