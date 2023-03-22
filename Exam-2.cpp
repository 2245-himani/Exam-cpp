#include<iostream>
#include<string.h>
using namespace std;
class Square
{
	public:
		int a;
		int b;
		void abc()
		{
		cout<<"..."<<endl;
		}
};
class Cube : public Square
{
	public:
		int a;
		int b;
		void xyz()
		{
		cout<<"Enter the value of a :- "<<endl;
		cin>>a;
		cout<<"The cube of A is :-"<<a*a*a<<endl;
		}
};
int main()
{
	Cube c1;
	c1.abc();
	c1.xyz();
	return 0;
}
