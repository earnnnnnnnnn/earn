#include <iostream>
using namespace std;


int main()
{
    int Mamount,
		b1000 = 1000,
		b500 = 500,
		b100 = 100,
		b50 = 50,
		b20 = 20 ; 

	
    cout << "----------------------- ATM -----------------------\n\n";
    cout << "Enter the amount you want to withdraw : ";
    cin  >> Mamount;


			b1000 = Mamount / b1000;
			cout << "1000$ : " << b1000 << endl;
			Mamount = Mamount - (b1000*1000);

			b500 = Mamount / b500;
			cout << "500$  : " << b500 << endl;
			Mamount = Mamount - (b500*500);

			b100 = Mamount / b100;
			cout << "100$  : " << b100 << endl;
			Mamount = Mamount - (b100*100);

			b50 = Mamount / b50;
			cout << "50$   : " << b50 << endl;
			Mamount = Mamount - (b50*50);

			b20 = Mamount / b20;
			cout << "20$   : " << b20 << endl;
			Mamount = Mamount - (b20*20);

	cout << "\n---------------------------------------------------\n\n";
	 

    system("pause");
    return 0;
}