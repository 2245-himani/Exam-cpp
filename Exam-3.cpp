#include<iostream>
#include<string.h>
using namespace std;
class High_school
{
	public:
		int id;
		char stu_name[100];
		int stu_roll;
		int stu_std;
		int stu_age;
		int stu_cont;
		char stu_add[100];
		void setter()
		{
			cout<<"information about High school!!!"<<endl;
			cout<<"Enter the id of student :- "<<endl;
			cin>>id;
			cout<<"Enter the name of student :- "<<endl;
			cin>>stu_name;
			cout<<"Entre the roll of student :- "<<endl;
			cin>>stu_roll;
			cout<<"Entre the std of student :- "<<endl;
			cin>>stu_std;
			cout<<"Entre the age of student :- "<<endl;
			cin>>stu_age;
			cout<<"Entre the cont of student :- "<<endl;
			cin>>stu_cont;
			cout<<"Entre the address of student :- "<<endl;
			cin>>stu_add;
		}
		void getter()
		{
			cout<<"Id :- "<<id<<endl;
			cout<<" Name :- "<<stu_name<<endl;
			cout<<"Address :- "<<stu_add<<endl;
			cout<<"Std :- "<<stu_std<<endl;
			cout<<"Age :- "<<stu_age<<endl;
			cout<<"Contact :- "<<stu_cont<<endl;
			cout<<"Address :- "<<stu_add<<endl;
		}
};
class College
{
	public:
		int id;
		char stu_name[100];
		int stu_roll;
		int stu_std;
		int stu_age;
		int stu_cont;
		char stu_add[100];
		 char stu_edu_insitute_name[100];
		void setter1()
		{
			cout<<"Information about college!!!"<<endl;
			cout<<"Enter the id of student :- "<<endl;
			cin>>id;
			cout<<"Enter the name of student :- "<<endl;
			cin>>stu_name;
			cout<<"Entre the roll of student :- "<<endl;
			cin>>stu_roll;
			cout<<"Entre the std of student :- "<<endl;
			cin>>stu_std;
			cout<<"Entre the age of student :- "<<endl;
			cin>>stu_age;
			cout<<"Entre the cont of student :- "<<endl;
			cin>>stu_cont;
			cout<<"Entre the address of student :- "<<endl;
			cin>>stu_add;
			cout<<"Enter the institute name of student :- "<<endl;
			cin>>stu_edu_insitute_name;
		}
		void getter1()
		{
			cout<<"Id :- "<<id<<endl;
			cout<<" Name :- "<<stu_name<<endl;
			cout<<"Address :- "<<stu_add<<endl;
			cout<<"Std :- "<<stu_std<<endl;
			cout<<"Age :- "<<stu_age<<endl;
			cout<<"Contact :- "<<stu_cont<<endl;
			cout<<"Address :- "<<stu_add<<endl;
			cout<<"Institute of Student :- "<<stu_edu_insitute_name<<endl;
		}
};
int main()
{
	High_school h1;
	College c1;
	h1.setter();
	h1.getter();
	c1.setter1();
	c1.getter1();
	return 0;
}
