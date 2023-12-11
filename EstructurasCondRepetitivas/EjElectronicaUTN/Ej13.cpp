/* EJERCICIO 13:
   Generar e informar los primeros N múltiplos de un número M entero*/

#include<iostream>

using namespace std;

void tablaMultiplo(int, int);

int main(){
    int m,n;

    cout << "Cual tabla deseas? ";
    cin >> n;

    cout << "Cuantos multiplos deseas? ";
    cin >> m;

    tablaMultiplo(n,m);

    system("pause");
    return 0;
}

void tablaMultiplo(int n, int m){
    cout << " Tabla de multiplicar del "<<n<< endl;

    for(int i = 0; i <= m; i++){
        cout << i << " x " << n << " = " <<i*n<<endl;
    }
}
