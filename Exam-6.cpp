#include<iostream>
#include<string.h>
using namespace std;
class RBI
{
	public:
	void set()
	{
	 cout<<"RBI : "<<endl;
	}
};
class SBI : public RBI
{
	public:
		void set1()
		{
		cout<<"SBI : "<<endl;
		}
};
class BOB : public SBI
{
	public:
		void set2()
		{
		cout<<"BOB : "<<endl;
		}
};
class ICICI : public BOB
{
	public:
		void set3()
		{
		cout<<"ICICI : "<<endl;
		}
};
int main()
{
	ICICI i1;
	i1.set();
	i1.set1();
	i1.set2();
	i1.set3();
	return 0;
}
