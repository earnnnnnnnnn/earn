#include <iostream>

using namespace std;
int main()
{
	float first,second,third,mid,final,Total,Total1,scoer;
	
	cout << "============QUTZZES============\n";
	cout << "Entyer first quizz (10):";
	cin >> first;
	cout << "Entyer second quizz (10):";
	cin >> second;
	cout << "Entyer third quizz (10):";
	cin >> third;

	cout << "============MID-TERM===========\n";
	cout << "Entyer mid-term (40):";
	cin >> mid;

	cout << "=============FINAL=============\n";
	cout << "Entyer final (50):";
	cin >> final;


	Total =  ((first + second + third)/3);
	Total1 = (((first + second + third)/3) + mid + final) ;


	cout << "Quizz Total : "<< Total << endl;
	cout << "Mid term : " << mid << endl;
	cout << "Final : " << final << endl;
	cout << "Total : "<< Total1 << endl;
	cout << "Your score is\ " << ((Total1 >= 50) ? "Pass \n" : "fail \n");


		system("pause");
    return 0;
}