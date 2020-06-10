#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={10,20,30,40,50};
	int n=sizeof(a)/sizeof(int);
	rotate(a,a+2,a+n);
	for(int i:a)
	{
		cout<<i<<" ";
	}
}