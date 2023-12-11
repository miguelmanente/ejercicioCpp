/* EJERCICO 2:
    Informar la fuerza con la cual impacta un cuerpo de masa M si el mismo se desplaza con una aceleración A.*/

#include<iostream>

using namespace std;

double calculaFuerza(double, double);

int main(){

    double masa, aceleracion;

    cout <<"Ingrese la masa que tiene el objeto: ";
    cin >> masa;

    cout <<"\n\nIngrese la aceleración del objeto: ";
    cin >> aceleracion;

    cout <<"\n\nEl objeto de masa "<<masa<<"Kg.- y una aceleracion "<<aceleracion<<"m/s2 - tiene una fuerza de "<<calculaFuerza(masa, aceleracion)<<" Newton"<<endl;

    system("pause");
    return 0;
}

double calculaFuerza(double masa, double aceleracion){
    return masa * aceleracion;
}


