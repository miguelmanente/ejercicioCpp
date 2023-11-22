#include<iostream>
#include<vector>

using namespace std;

int main(){
   
    int i=0, pos=0 , modifica = 0;
   
    vector <int> lista = {10,20,30,40,50};

    cout<<"\n\n";

    cout <<"\nLista de elementos en el vector:\n\n";  

    while (i <lista.size()){
        cout << lista[i] <<" ";
        i++;
    }

    cout << "\nIngrese la posición del elemento del vector a buscar:";
    cin >> pos;

    /* lista.at(4); // Método at que nos sirve para averiguar que elemento hay almacenado en la posición*/

    cout << " El elemento del vector que esta en la posicion "<< pos << " es:  " <<lista.at(pos);
    
    cout << "\nIngrese la posición del elemento del vector a buscar: ";
    cin >> pos;

    cout << "\nIngrese el nuevo valor del elemento del vector: ";
    cin >> modifica;
    lista.at(pos) = modifica; // Método at nos permite modificar el elemento que está almacenado en esa posición

    cout <<"\nLista nueva de elementos en el vector es:\n\n";  
    i=0;
    while (i <lista.size()){
        cout << lista[i] <<" ";
        i++;
    }
}