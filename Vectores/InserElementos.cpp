#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int cant_elementos = 0, i = 0;
    set <int> lista;

    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> cant_elementos;

    while (i < cant_elementos){
        lista.insert(1 + rand() % 100);
        i++;
    }

    cout << "\n\nLOS ELEMENTOS DEL VECTOR SON:\n";
    for (auto i = lista.begin(); i != lista.end(); i++){
        cout << *i << " ";
    }
}
