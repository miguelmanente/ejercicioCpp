/* Desarrollar un programa que calcule el presupuesto de una tarima flotante
   ingresando los m2 por teclado costando los de calidad media  35.5€ y los
   de calidad alta 55.3€ */
   
#include <iostream>
using namespace std;

int main(){

    int CalidadMedia{0}, CalidadAlta{0};
    double IvaCM{0}, IvaCA{0}, PrecioImporteIvaCM{0}, PrecioImporteIvaCA{0};
    double  PrecioXMetrosCM{0}, PrecioXMetrosCA{0};
    const double PrecioMetrosCM{35.5}, PrecioMetrosCA{55.3};
    const double PrecioIVA{0.21};
    const int ExpiraPresupuesto{30};

    cout <<"\nIngrese la cantidad de metros a instalar con calidad media:  ";
    cin >> CalidadMedia;

    cout << "\nIngrese la cantida de metros a instalar con calidad alta:  ";
    cin >> CalidadAlta;

    PrecioXMetrosCM = CalidadMedia * PrecioMetrosCM;
    PrecioXMetrosCA = CalidadAlta * PrecioMetrosCA;

    IvaCM = PrecioXMetrosCM * PrecioIVA;
    IvaCA = PrecioXMetrosCA * PrecioIVA;

    PrecioImporteIvaCM = PrecioXMetrosCM + IvaCM;
    PrecioImporteIvaCA = PrecioXMetrosCA + IvaCA;

    cout <<"\nEl precio total por "<<CalidadMedia <<" m2 de tarima flotante de calidad media sin IVA es : "<<PrecioXMetrosCM <<" Euros"<<endl;
    cout <<"\nEl precio total por "<<CalidadMedia <<" m2 de tarima flotante de calidad media con IVA es : "<<PrecioImporteIvaCM <<" Euros"<<endl;
    cout <<"\nEl precio total por "<<CalidadAlta <<" m2 de tarima flotante de calidad alta sin IVA es : "<<PrecioXMetrosCA <<" Euros"<<endl;
    cout <<"\nEl precio total por "<<CalidadAlta <<" m2 de tarima flotante de calidad alta con IVA es : "<<PrecioImporteIvaCA <<" Euros"<<endl;
    cout <<"\nEl presupuesto tiene validez por " << ExpiraPresupuesto <<" dias"<< endl;

    system("pause");
    return 0;

}