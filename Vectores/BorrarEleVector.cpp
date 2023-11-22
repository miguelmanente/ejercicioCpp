#include<iostream>
#include<vector>

using namespace std;

int main ()
{
  vector <int> lista;

  // agrega al vector números del 1 al 10
  for (int i=1; i<=10; i++){
      lista.push_back(i);
  } 

 // borra los tres primeros elementos de la lista 
  //lista.erase (lista.begin(),lista.begin()+3);

  // Borra los siete primeros elementos de la lista:
  lista.erase (lista.begin(),lista.end()-3);

  cout << "El vector queda asi:";
  for (unsigned i=0; i< lista.size(); ++i)
      cout << ' ' << lista[i];
      cout << '\n';

  return 0;
}