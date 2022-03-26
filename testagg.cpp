#include<iostream>
#include<vector>
#include<set>

using namespace std;

int answer(){
    int answer = 0;
    set<pair<int, int>> points;

    for(auto i=points.begin(); i!=std::prev(points.end()); i++)
    {
        for(auto j=i; j!=points.end(); j++)
        {
            pair<int, int> p1 = *i;
            pair<int, int> p2 = *j;

            if(p1.first == p2.first || p1.second == p2.second)
                continue;

            pair<int, int> p3 = make_pair(p1.first, p2.second);
            pair<int, int> p4 = make_pair(p2.first, p1.second);

            if(points.find(p3) != points.end() && points.find(p4) != points.end())
                ++answer;
        }
    }

    return answer/2;
}

int main(int argc, char const *argv[])
{
    cout<<answer();
    return 0;
}
