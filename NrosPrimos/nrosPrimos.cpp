#include <iostream>

using namespace std;

bool esPrimo(int numero)
{
	if (numero == 0 || numero == 1 || numero == 4)
	{
		return false;
	}
	for (int x = 2; x < numero / 2; x++)
	{
		if (numero % x == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int cantidad = 10;
	int arreglo[cantidad];
	int i;

    cout <<"\n\nLISTA DE NUMEROS INGRESADOS ALEATORIAMENTE"<<endl;
    
	for (i = 0; i < cantidad; i++){
		arreglo[i]= 1 + rand() %99;
        cout<<" "<<arreglo[i];
	}

    cout <<"\n\nLISTA DE NUMEROS INGRESADO ANTERIORMENTE QUE SON PRIMOS"<<endl;

	for (i = 0; i < cantidad; i++)
	{
		int numero = arreglo[i];
		if(esPrimo(numero)){
			cout <<" "<< numero ;
		}
	}
}