// vector is nothing but a dynamic array which can grow and shrink in size
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	std::vector<char> b(5,'h');
	std::vector<char> c(b);
	for(char i:c)
	{
	cout<<i<<" ";
	}
	// Or
	cout<<endl;
	for(auto it=b.begin();it!=b.end();it++)
	{
		cout<<*it<<",";
	}
	//or
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no);// pushback inserts element at the last of the vector,it increases the size dynamically
	}
	for(int i:v)
	{
		cout<<i<<",";
	}
	cout<<endl;
	// we can check the max size of the vector
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;// size of underlying array
	cout<<v.max_size()<<endl;// maximum no of elements a vector can hold in the worst case.

	// for 'b' array
	cout<<b.size()<<endl;
	cout<<b.capacity()<<endl;// size of underlying array
	cout<<b.max_size()<<endl;


}