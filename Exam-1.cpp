#include<iostream>
#include<string.h>
using namespace std;
class Mother
{
	public:
		void display()
		{
		cout<<"Hey,what's going on!"<<endl;
		}
};
class Daughter : public Mother 
{
	public:
		void display1()
		{
		cout<<"Nothing mumma!!"<<endl;
		}
};
int main()
{
	Daughter d1;
	d1.display();
	d1.display1();
	return 0;

}
