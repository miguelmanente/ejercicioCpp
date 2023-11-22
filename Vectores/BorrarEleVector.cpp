#include<iostream>
#include<vector>

using namespace std;

int main ()
{
  vector <int> lista;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++){
      lista.push_back(i);
  } 

 /*  // erase the 6th element
  lista.erase (lista.begin()+5); */

  // erase the first 3 elements:
  lista.erase (lista.begin(),lista.begin()+5);

  cout << "El vector queda asi:";
  for (unsigned i=0; i< lista.size(); ++i)
      cout << ' ' << lista[i];
      cout << '\n';

  return 0;
}