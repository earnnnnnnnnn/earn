#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string gender;
	float age,height,weight,bmi;
	cout << "Enter age : ";
	cin >> age;
	cout << "Enter gender : ";
	cin >> gender;
	cout << "Enter height : ";
	cin >> height;
	cout << "Enter weight : ";
	cin >> weight;
	
	bmi =  weight / (height/100 * height/100);
	cout << "BMI = "<< bmi << endl;

	if (bmi <= 18.5) cout << "underweight\n";
		else if (bmi <= 24 ) cout << "normal\n";
			else if (bmi <= 29 ) cout << "overweight\n";
				else if (bmi >= 30 ) cout << "obesity\n";




	system("pause");
	return(0);
}
