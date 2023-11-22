#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double numero,raizCub;
    
    cout<<"Ingrese un numero al que desea calcular su raiz cubica"<< endl;
	cin >> numero;
	
    raizCub = cbrt(numero);

	cout <<"La raiz cubica de "<< numero <<" es: "<< raizCub <<endl;

    system("pause");
    return 0;
}
