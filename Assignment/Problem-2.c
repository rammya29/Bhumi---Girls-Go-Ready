/* Create a class named 'Member' having the following members:
Data members
1 - Name
2 - Age
3 - Phone number
4 - Address
5 – Salary
Create a method named 'printSalary' which prints the salary of the members.
Two classes 'Employee' and 'Manager' inherits the 'Member' class. The 'Employee'
and 'Manager' classes have data members 'specialization' and 'department'
respectively. Now, assign name, age, phone number, address and salary to an
employee and a manager by making an object of both classes and print the same.  */

#include<iostream>

using namespace std;

class Member{
	
	public :
	char Name[50], Address[100];
	int Age, Salary;
	long long int Phone;
	
	int printSalary(int Salary){
		
		cout << " Salary of an Employee is : " << Salary;
	}
	
};

class Employee : public Member {
	
	public : 
	
	char Specialization;
};

class Manager : public Member {
	
	public :
		
	char department;
};

int main(){
	
	Employee emp;
	Manager man;
	
	char nam[50], add[100];
	int age, sal;
	long long int ph;
	
	cout << "Enter your name : ";
	cin >> nam;
	
	cout << "Enter your Age : ";
	cin >> age;
	
	cout << "Enter your Address : ";
	cin >> add;
	
	cout << "Enter your Phone Number : ";
	cin >> ph;
	
	cout << "Enter your Salary : ";
	cin >> sal;
	
	cout << emp.printSalary(sal) << endl;
	cout << man.printSalary(sal) << endl;
	
	return 0;
}











