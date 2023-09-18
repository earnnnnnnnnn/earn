#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int num[4] , total=0 , Max=0 , Min=0;
	string Name[4];
	for(int i=0;i<4;i++)
	{
		cout<<"Name:["<< i << "]:";
		cin >> Name[i];
		cout<<"Score ["<< i << "]:";
		cin>>num[i];
	}
	cout<<"---------------------"<<endl;
	cout<<"Name          Score"<<endl;
	cout<<"---------------------"<<endl;
	for(int i=0;i<4;i++)
	{
		cout<<Name[i]<<"\t\t"<<num[i]<<endl;
		total = total+num[i];
		if(num[i]>Max)
			Max = num[i];

		Min = num[0];
		if(num[i]<Min)
			Min = num[i];

	}
	cout<<"---------------------"<<endl;
	cout<<"Max Score = "<<Max<<endl;
	cout<<"Min Score = "<<Min<<endl;
	cout<<"Totaol    = "<<total<<endl;
	cout<<"Average   = "<<(float)total/4<<endl;
	system("pause");
	return 0;
}