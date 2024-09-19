/*Q3Write a program create employee class with members variable as EmpId,Name of Employee and
Salary. For 10 Employees 
Prinlist of all employees.
Prinlist of employee who got heights salary.*/
#include<iostream>
#include<string>
using namespace std;
class employee
{
	private:
		int empid[10],i,max,n;
		float salary[10];
		string name[10];
	public:
		void get()
		{	cout<<"\nEnter the Number of Employees to Add Details ";
			cin>>n;
			for(i=0;i<n;i++)
			{
				cout<<"\nEnter Details of "<<i+1<<" Employee";
				cout<<"\nEnter Employee ID: ";
				cin>>empid[i];
				cout<<"\nEnter Employee Name: ";
				cin>>name[i];
				cout<<"\nEnter Salary of Employee ";	
				cin>>salary[i];
			}
		}
		void put()
		{	
			for(i=0;i<n;i++)
			{
				cout<<"\n"<<empid[i]<<"\t\t"<<name[i]<<"\t\t"<<salary[i]<<" INR";
			}
		}
		void check_salary()
		{
			max=salary[0];
			cout<<"\nEmployee Who have Heighest Salary";
			for(i=0;i<n;i++)
			{
				if(salary[i]>max)
				{
					max=salary[i];
					cout<<"\nEMP-ID: "<<empid[i]<<"\nNAME: "<<name[i]<<"\nSalary: "<<salary[i]<<" INR";
				}
			}
		}
	
};
int main()
{
	employee e1;
	e1.get();
	cout<<"\nEMP-ID"<<"\t\tNAME"<<"\t\tSALARY(INR)";
	e1.put();
	e1.check_salary();
	
}