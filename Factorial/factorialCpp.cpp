#include<iostream>
using namespace std;

int num, n;
int factorial=1;

int main()
{

    cout <<"ingrese un numero entero: " << endl;
	cin >> num;

    n = num;


	while(num>0)
		{
			factorial = factorial * num;
			num--;
		}

    cout << "El factorial de "<< n <<" es: "<< factorial << endl;

	system("pause");
	return 0;
}