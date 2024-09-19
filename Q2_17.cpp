/*Write a C++ program to accpet worker information Worker_Name, No_Of_Hours_Worked, 
Pay_Rate and Salary. Write necessary functions to calculate and display the salary of Worker. (Use 
Default values for Pay_Rate Rs. 500 per hours*/
#include<iostream>
#include<string>
using namespace std;
class worker
{
	private:
		int nhw[10],i,rate;
		float salary[10];
		string name[10];
	public:
		worker()
		{
			rate=500;
		}
		void get()
		{	
			for(i=0;i<3;i++)
			{
				cout<<"\nEnter Details of "<<i+1<<" Worker";
				cout<<"\nEnter Employee Name: ";
				cin>>name[i];
				cout<<"\nEnter Number of Hours "<<name[i]<<" Worked: ";
				cin>>nhw[i];
			}
		}
		void put()
		{	
			for(i=0;i<3;i++)
			{
				cout<<"\n"<<name[i]<<"\t\t"<<nhw[i]<<"\t\t\t"<<salary[i]<<" INR";
			}
		}
		void calculate_salary()
		{
			for(i=0;i<3;i++)
			{
				salary[i]=nhw[i]*rate;
			}
		}
	
};
int main()
{
	worker w1;
	w1.get();
	w1.calculate_salary();
	cout<<"\nNAME"<<"\t\tNo_Hrs_Worked"<<"\t\tTOTAL SALARY(INR)";
	w1.put();
	
}