#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
	public:
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char add[100];
		char email[100];
		int cont;
		void setter()
		{
			cout<<"Enter the id of employee :- "<<endl;
			cin>>id;
			cout<<"Enter the name of employee :- "<<endl;
			cin>>name;
			cout<<"Enter the role of employee :- "<<endl;
			cin>>role;
			cout<<"Enter the salary of employee :-"<<endl;
			cin>>salary;
			cout<<"Enter the address of employee :-"<<endl;
			cin>>add;
		}
		void getter()
		{
			cout<<"ID :- "<<id<<endl;
			cout<<" Name :- "<<name<<endl;
			cout<<"Role :- "<<role<<endl;
			cout<<"Salary :- "<<salary<<endl;
			cout<<"Address :- "<<add<<endl;
		}
};
int main()
{
	Employee e1;
	e1.setter();
	e1.getter();
	return 0;
}
