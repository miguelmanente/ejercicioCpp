/* Ingrese un número entero y calcule su s raíz cuadrada */

#include <stdio.h>
#include <math.h>

int main()
{
    int numero = 0;
    float raizCub = 0.0;
    
    printf("Ingrese un numero al que desea calcular su raiz cuadrada: ");
	scanf("%d",&numero);
	
    raizCub = sqrt(numero);

	printf("La raiz cubica de %d es: %.2f",numero, raizCub);

    getchar();
    return 0;
}
