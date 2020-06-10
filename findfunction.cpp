//find(): function return the address of that particular found location. So to find the index we will substract the starting location of that
//array so that we get the location of that particular key
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int  index;

	int a[]={1,2,3,4};
	int key;
	cin>>key;
	auto address=find(a,a+4,key);
 	index=address-a;
 	cout<<index;
}