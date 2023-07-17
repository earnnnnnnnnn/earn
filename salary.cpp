#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name;
	float  salary,sale,comm;
	cout << "Entyer Name	:";
	cin >> Name;
	cout << "Enter Salary	:";
	cin >> salary;
	cout << "Enter sale	:";
	cin >> sale;
	cout << "Enter Commission percent :" ;
	cin >> comm;
	

	cout << "--------output-------\n";
	cout << " your name ="<<Name << endl;
	cout << "Total Revenue ="<< salary + (sale*(comm/100));
	cout << "\n\n-----------------------\n";
	system("pause");

	return(0);
}