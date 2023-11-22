#include<iostream>
#include<vector>

using namespace std;

int main(){
    int i=0;
   
    vector <int> lista = {10,20,30,40,50};

    /* vector <char> letras; */

 

    /*cout << lista.at(4); // Método at que nos sirve para averiguar que elemento hay almacenado en la posición
    lista.at(3) = 1960; // Método at nos permite modificar el elemento que está añmacenado en esa posición*/
   
    cout<<"\n\n";

    cout <<"\nLista de elementos en el vector:\n\n";  

    lista.push_back(60); //Método que no permite agregar  elementos al final del vector.

    while (i <lista.size()){
        cout << lista[i] <<" ";
        i++;
    }
    

}