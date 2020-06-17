#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{

     vector<int> v1{1,2,3};
     vector< vector<int> > v2(2);
   	 v2[0]=v1;
   	 v2[1]=v1;
     cout<<v2[0][1];
   	for(int i=0;i<v2.size();i++)
   	{
   		for(int j=0;j<v2[i].size();j++)
   		{
   			cout<<v2[i][j]<<" ";
   		}
   	}

}