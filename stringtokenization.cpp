/*
* char *strtok(char *s,char *delimiters)
* returns a token on each subsequent call 
* on the first call function should be passed with string argument for 'a'
* on subsequent calls we should pass the string argument as null
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int main()
{
	char s[100]="Today is a rainy day";
	vector<string> v;
	char *ptr=strtok(s," ");// strtok() creates an array seperately to place the tokenized string so ptr is a pointer which points that array.
	cout<<ptr<<endl;
	// strtok() is a static function which stores the array as static which stores the current status of the  array pointer  
	// when you call the strtok() func without mentioning any "string" it by keeping NULL, it continues from its current status
	// to print the output. we can keep in a loop by keeping till ptr!='\0'.
	while(ptr!='\0')
	{
	ptr=strtok(NULL," ");
	v.push_back(ptr);// we can store in a vector.
	cout<<v.back()<<" ";
	cout<<ptr<<endl; 
	}
}