// functors is nothing but without calling the function with the function name we can call it by the class object simply by keeping "()".
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Functor
{
public:
void operator()(string s)
{
	cout<<"Having fun inside the operator() "<<s;
}
};
int main()
{
	Functor f;// Constructor
	f("C++");// Overloaded () Operator = function call where f is an object.	

}