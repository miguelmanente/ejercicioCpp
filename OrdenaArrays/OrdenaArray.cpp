#include<iostream>

using namespace std;

int main(){

    int v[5];
    int aux = 0;
    int i = 0; 

    cout << "\nARRAY DESORDENADO" << endl;
    cout << "***** ***********" << endl;

    while (i < 5){
        v[i] = 1 + rand() % 100;
        cout << v[i] << "  ";
        i++;
    }

    for(i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++ ){
            if (v[j] > v[j+1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    cout  <<" "<< endl;
    cout << "\nARRAY ORDENADO" << endl;
    cout << "***** ********" << endl;

    for(i = 0; i < 5; i++){
        cout << v[i] <<"  ";
    }

    cout <<" " << endl;
    system("pause");
    return 0;
}