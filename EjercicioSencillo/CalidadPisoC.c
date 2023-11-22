/* Desarrollar un programa que calcule el presupuesto de una tarima flotante
   ingresando los m2 por teclado costando los de calidad media  35.5€ y los
   de calidad alta 55.3€ */
   
#include <stdio.h>
#include <stdlib.h>

int main(){

    int CalidadMedia =0, CalidadAlta = 0;
    double IvaCM = 0, IvaCA =0, PrecioImporteIvaCM = 0, PrecioImporteIvaCA = 0;
    double  PrecioXMetrosCM = 0, PrecioXMetrosCA = 0;
    const double PrecioMetrosCM = 35.5, PrecioMetrosCA = 55.3;
    const double PrecioIVA = 0.21;
    const int ExpiraPresupuesto = 30;

    printf("\nIngrese la cantidad de metros a instalar con calidad media:  ");
    scanf("%d",&CalidadMedia);

    printf("\nIngrese la cantida de metros a instalar con calidad alta:  ");
    scanf("%d",&CalidadAlta);

    PrecioXMetrosCM = CalidadMedia * PrecioMetrosCM;
    PrecioXMetrosCA = CalidadAlta * PrecioMetrosCA;

    IvaCM = PrecioXMetrosCM * PrecioIVA;
    IvaCA = PrecioXMetrosCA * PrecioIVA;

    PrecioImporteIvaCM = PrecioXMetrosCM + IvaCM;
    PrecioImporteIvaCA = PrecioXMetrosCA + IvaCA;

    printf("\nEl precio total por %d m2 de tarima flotante de calidad media sin IVA es : %.2lf Euros\n",CalidadMedia, PrecioXMetrosCM);
    printf("\nEl precio total por %d m2 de tarima flotante de calidad media con IVA es : %.2lf Euros\n",CalidadMedia,PrecioImporteIvaCM);
    printf("\nEl precio total por %d m2 de tarima flotante de calidad alta sin IVA es : %.2lf Euros\n",CalidadAlta, PrecioXMetrosCA);
    printf("\nEl precio total por %d m2 de tarima flotante de calidad alta con IVA es : %.2lf Euros\n",CalidadAlta,PrecioImporteIvaCA);
    printf("\nEl presupuesto tiene validez por %d dias\n",ExpiraPresupuesto);

    getchar();
    return 0;

}