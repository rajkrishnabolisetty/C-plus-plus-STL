#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a[]={12,13,0,1,1,1,21,323};
	//auto n=sizeof(a)/sizeof(a[0]);      
	auto n=end(a)-begin(a);         // (second method to find length) 
	sort(a,a+n);
	//As the array is sorted we need to binary search itf
	for(int i:a)
	{
		cout<<i<<" ";
	}

	int key;
	cin>>key;//element we want to search
	auto index=binary_search(a,a+n,key);// This function returns only 1 or 0 if element is present 1 else 0;
	if(index)
	{
		cout<<"present";
	}
	else
	{
		cout<<"absent";
	}
	auto iter=lower_bound(a,a+n,key);// This function returns the first element greater than or equal (>=) to "key" ex: input key==>90 , output:7(index)
	cout<<endl<<"first element index greater than or equal to key is"<<iter-a<<" "<<"element is"<<a[iter-a];
	auto lower_index=iter-a;
	iter=upper_bound(a,a+n,key);// This function returns the first element strictly greater than (>) to "key" ex: input==> , output:4
	auto upper_index=iter-a;
	cout<<endl<<"first element greater than key is"<<iter-a;
	// we can find the frequency of a certain element by upper_bound()-lower_bound()
	int freq=upper_index-lower_index;
	cout<<endl<<"freq of key is "<<freq;
}