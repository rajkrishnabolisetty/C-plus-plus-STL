#include<iostream>

#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<int> d{1,2,3,4,5};
	d.push_back(16);
	for(auto x:d)
	{
		cout<<x<<",";
	}
	//
	d.pop_back();// pops the element
	cout<<endl;
	cout<<"poped the element"<<" ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	//
	d.insert(d.begin()+3,100);// insert at certain position
	cout<<endl;
	cout<<"Insert at 3rd position"<<" ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	d.insert(d.begin()+3,4,200);// insert from 3rd position to 4th position with 200
	cout<<endl;
	cout<<"insert at certain range of pos 3 to 4 elements"<<" ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	//
	d.erase(d.begin()+2);// erase an element from that certain position. 
	cout<<endl;
	cout<<"erase at certain position of 2"<<" ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	d.erase(d.begin()+2,d.begin()+5);// erasing from a range of positions
	cout<<endl;
	cout<<"erase at certain range of elements 2 to 5"<<" ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	// shrink operation doesn't really decrease  the size it just moves the size pointer front.
	d.resize(10);
	cout<<"After shrink opn "<<d.capacity()<<endl;//here you can see that there is no change in the size of the vector
	d.clear();
	if(d.empty())
	{
		cout<<"This is an empty vector"<<" ";
	}
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	cout<<endl;
	cout<<"size opn"<<" ";
	cout<<d.size()<<endl;
	cout<<" just displying elemets in vector after pushback  ";
	for(auto x:d)
	{
		cout<<x<<",";
	}
	//
	cout<<endl;
	cout<<"displayed front element using front() "<<d.front()<<endl;
	cout<<"displayed back element "<<d.back()<<endl;
	// reserve is a best method to declare at the front it reserves certain memory in the system
	// so that it no need to increase the size and copy all elements whenever we push_back() it.
	d.reserve(100);
	cout<<d.capacity()<<endl;


} 