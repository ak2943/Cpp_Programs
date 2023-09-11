#include<iostream>
using namespace std;
class emp
{
	public:
		int eid;
		string name;
		string dept;
		float salary;
		
		emp()
		{
			cout<<"\n Enter Employee ID: ";
			cin>>eid;
			cout<<"\n Enter Employee NAME: ";
			cin>>name;
			cout<<"\n Enter Employee DEPARTMENT: ";
			cin>>dept;
			cout<<"\n Enter Employee SALARY: ";
			cin>>salary;
		}
		
};

int main()
{
	emp e[3];
	int i,j;
	float s;
	s=e[1].salary;
	for(i=1;i<3;i++)
	{	
		if(e[i].salary>s)
		{
			s=e[i].salary;
		}
	}
	for(i=1;i<4;i++)
	{
		if(e[i].salary==s)
		{
			cout<<"\n MAXIMUM SALARY OF EMPOLYEE IS: "<<e[i].salary;
			cout<<"\n NAME OF EMPLOYEE IS : "<<e[i].name;
		}
	}
	return 0;
}








