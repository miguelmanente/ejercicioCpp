/* EJERCICIO 1:
    Ingresar el alto, ancho y profundidad de una caja y presentar su volumen*/

#include<iostream>

using namespace std;

double volumenCaja(double, double, double);

int main(){

    double ancho, alto, profundidad;

    cout<<"Ingrese el ancho de la caja: ";
    cin>>ancho;
    
    cout<<"Ingrese el alto de la caja: ";
    cin>>alto;
    
    cout<<"Ingrese la profundidad de la caja: ";
    cin>>profundidad;

    cout<<"el ancho de la caja "<<ancho<<" por el alto de la caja "<<alto<<" por la profundidad de la caja "<<profundidad<<" tiene un volumen de "<<volumenCaja(ancho,alto,profundidad)<<" cm3"<<endl;

    system("pause");
    return 0;
}

double volumenCaja(double ancho, double alto, double profundidad){
    return ancho * alto * profundidad;
}
