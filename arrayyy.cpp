#include<iostream>
#include<iomanip>
#include <time.h>
using namespace std;
void check_result(int x);
int main()
{
    int num[10];
    cout<<"Element Value Histogram"<<endl;
    cout<<endl;
    srand(time(NULL));

    for (int i=0;i<10;i++)
    {
        num[i]=1+rand()%30;
        cout<< i << setfill(' ')<<setw(5)<<num[i]<<"  "<<setfill('*')<<setw(num[i])<<""<<endl;

    }

    system("pause");
    return 0;
}
