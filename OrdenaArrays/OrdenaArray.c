#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
    int v[5] = {0,0,0,0,0};
    int aux = 0;
    int i = 0;

    printf("\nARRAY DESORDENADO\n");
    printf("***** ***********\n");

    while (i < 5){
        v[i] = 1 + rand() % 100;
        printf("%d\t",v[i]);
        i++;
   }

   for(i = 0; i < 5; i++){
    for(int j= 0; j < 4; j++){
        if (v[j] > v[j+1]){

            aux = v[j];
            v[j] = v[j+1];
            v[j+1] = aux;
        }
    }
   }

   	printf("\nARRAY ORDENADO ASCENDENTE\n");
	printf("****** ******** **********\n");
	
	for(int i=0;i<5;i++){
		printf("%d\t",v[i]);
	}

}