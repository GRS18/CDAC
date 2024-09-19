/*Q.No. 1 Banking Record System.
File handling has been effectively used for each feature of this project
Operations ?
Add Record: ? 
Show/List Data: ?
Search Record: ? 
Edit Record:
Delete Record*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{	
	ifstream fin;
	ofstream fout;
	int ch,acno,age;
	string name,gen;
	char ch;
	do
	{
		cout<<"\n1.Add Record"<<"\n2.Show/List Data"<<"\n3.Search Record"
		<<"\n4.Edit Record:"<<"\n5.Delete Record"<<"\n5.Exit";
		cout<<"\nEnter the Choise to Perform Operation: ";
		cin>>ch;
		switch(ch)
			
			case 1:fout.open("bank.txt",ios::app);
					cout<<"\nEnter Account number of user: ";
					cin>>acno;
					fout<<"\nAccount Number : "<<acno;
					cout<<"\nEnter Account user name: ";
					cin>>name;
					fout<<"\nAccount user name : "<<name;
					cout<<"\nEnter Account user Gender: ";
					cin>>gen;
					fout<<"\nAccount user Gender : "<<gen;
					fout.close();
			
//			case 2:fin.open("bank.txt");
//					if(fin!=0)
//					{
//						while(1)
//						{
//							ch=fin.get()
//							
//							if(ch==" ")
//							break;
//						}
//					}
//					fin.close();
					
					
			
		
	}while(ch!=6);
	
return 0;
}