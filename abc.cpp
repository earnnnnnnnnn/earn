#include <iostream>
using namespace std;

int main()
{   
    char ac1, ac2, ac3, a = 'A', b = 'B', c = 'C';
    int acA, acB, acC , result;


    cout << "Enter character1 (A,B,C) : ";
    cin >> ac1;
    cout << "Enter character2 (A,B,C) : ";
    cin >> ac2;
    cout << "Enter character3 (A,B,C) : ";
    cin >> ac3;
    cout << endl;


    switch (ac1)
    {
        case 'A':
            ac1 = a;
            acA = 10;
            cout << "A = " << acA <<", ";

            break;
        case 'B':
            ac1 = b;
            acA = 20;
            cout << "B = " << acA <<", ";
            break;
        case 'C':
            ac1 = c;
            acA = 30;
            cout << "C = " << acA <<", ";
            break;
        default:
            cout << "\"" << ac1 << "\" is not (A,B,C)!" << endl;
            return 1;
    }

    switch (ac2)
    {
        case 'A':
            ac2 = a;
            acB = 10;
            cout << "A = " << acB <<", ";
            break;
        case 'B':
            ac2 = b;
            acB = 20;
            cout << "B = " << acB <<", ";
            break;
        case 'C':
            ac2 = c;
            acB = 30;
            cout << "C = " << acB <<", ";
            break;
        default:
            cout << "\"" << ac2 << "\" is not (A,B,C)!" << endl;
            return 1;
    }

    switch (ac3)
    {
        case 'A':
            ac3 = a;
            acC = 10;
            cout << "A = " << acC;
            break;
        case 'B':
            ac3 = b;
            acC = 20;
            cout << "B = " << acC;
            break;
        case 'C':
            ac3 = c;
            acC = 30;
            cout << "C = " << acC;
            break;
        default:
            cout << "\"" << ac3 << "\" is not (A,B,C)!" << endl;
            return 1;
    }
    cout << endl;

    result = acA + acB + acC;
    cout << ac1 << " + " << ac2 << " + " << ac3 << " = ";
    cout << acA << " + " << acB << " + " << acC << " = " << result << endl;
    

    cout << endl;
    system("pause");
    return 0;
}