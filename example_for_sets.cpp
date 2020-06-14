#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>> s;
    for(int i=10;i>0;i--)
    {
    	s.insert(i);
    }
    for(auto i=s.begin();i!=s.end();i++)
    {
    	cout<<*i<<" ";
    }
}