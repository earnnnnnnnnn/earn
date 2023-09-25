#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
void input(int &numS,int q[10],int m[10],int f[10]);
void ViewAll(int &numS,int q[10],int m[10],int f[10]);
void ViewID(int &numS,int q[10],int m[10],int f[10]);
int main()
{
int numS,q[10],m[10],f[10];
char menu;


do{
	cout << setfill('=')<<setw(30)<<""<<endl;
	cout <<"           MENU          "<<endl;
	cout << setfill('=')<<setw(30)<<""<<endl;
	cout << "1.Input student records"<<endl;
	cout << "2.View all student records"<<endl;
	cout << "3.Show a student by ID"<<endl;
	cout << "4.Exit"<<endl;
	cout <<endl;
	cout << "Select menu : " ;
	cin >> menu;
	cout <<endl;
	if(menu == '1')
	{
		input(numS,q,m,f);

	}
	else if(menu == '2')
	{
		ViewAll(numS,q,m,f);

	}
	else if(menu == '3')
	{
		ViewID(numS,q,m,f);
	}
	else return(0);

}while(menu != '4');

	return(0);
}
void input(int &numS,int q[10],int m[10],int f[10])
{
	cout << "Input Number of Student : " ;
	cin >> numS;
	for(int i = 0 ; i < numS;i++)
	{
		cout << "Number "<<i+1<<endl;
		cout << "Input Quiz : " ;
		cin >> q[i] ;
		cout << "Input Midterm : " ;
		cin >> m[i] ;
		cout << "Input Final : " ;
		cin >> f[i] ;
		cout <<endl;

	}
	cout <<endl;
}
void ViewAll(int &numS,int q[10],int m[10],int f[10])
{
	cout << setfill('-')<<setw(30)<<""<<endl;
	cout <<"StdID\tQuiz\tMidterm\tFinal" <<endl;
	cout << setfill('-')<<setw(30)<<""<<endl;
	for (int i = 0; i < numS; i++)
	{
		cout <<i+1<<"\t"<< q[i] <<"\t" << m[i] <<"\t" << f[i] <<"\t"<<endl;
	}
	cout << setfill('-')<<setw(30)<<""<<endl;
	cout <<endl;

}
void ViewID(int &numS,int q[10],int m[10],int f[10])
{
	int id;
	cout << "Input ID : ";
	cin >> id ;

	for(int i = 0; i < numS;i++)
	{
		if(id == i+1)
		{
			cout << setfill('-')<<setw(30)<<""<<endl;
			cout <<"StdID\tQuiz\tMidterm\tFinal" <<endl;
			cout << setfill('-')<<setw(30)<<""<<endl;
			cout <<i+1<<"\t"<< q[i] <<"\t" << m[i] <<"\t" << f[i] <<"\t"<<endl;
			cout << setfill('-')<<setw(30)<<""<<endl;
		}
		else
		{
			cout << "Your ID is not found"<<endl;

		}
	break;

	}
	cout <<endl;


}
