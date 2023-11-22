#include<stdio.h>

int main()
{
    int factorial = 1;
    int num = 0, n = 0;

    printf("Ingrese un numero entero: ");
    scanf("%d",&num);

    n = num;
    while (num > 0){
        factorial = factorial * num;
        num --;
    }

    printf("El factorial de %d es: %d ",n,factorial);
    getchar();
    return 0;
}
