/* Ejercicio 10
Una automotriz desea determinar el precio de venta adecuado para una línea nueva donde el cliente puede
seleccionar el color del mismo y su tapizado. Para ello se deberán tener en cuenta las siguientes tablas:

color     Importe               Tapizado    Importe
Negro       $ 250               Vinilo         $ 150
Rojo        $ 200               Cuero          $ 750
Blanco      $ 180               Tela           $ 200
Azul        $ 190
 */

#include <iostream>

using namespace std;

//EJERCICIO REALIZADO CON ARRAYS
/* int main(){
   string color;
   string tapizado;

   int precioAuto = 0;
   int i = 0;

   string colorAuto[] = {"Negro","Rojo","Blanco","Azul"};
   int costoAuto[] = {250, 200, 180, 190};
    
   cout << "Ingrese El color del automovil: ";
   cin >> color;

   cout << "Ingrese el tapizado del automovil: ";
   cin >> tapizado;

   while (i < 4){
      if (color == colorAuto[i]){
         if (tapizado == "Vinilo"){
            precioAuto = costoAuto[i] + 150;
         }else if(tapizado == "Cuero"){
            precioAuto =  costoAuto[i] + 750;
         }else if(tapizado == "Tela"){
            precioAuto = costoAuto[i] + 200;
         }else{
            cout << "El importe es cero porque ninguna de las opciones es correcta";
         }
      }
      i++;
   }

   cout <<"\n\nEl precio final del automovil es : " <<precioAuto <<"\n\n"<< endl;

} */

//EJERCICIO REALIZADO CON SWITCH
/* int main(){
   int color;
   int tapizado;

   int precioAuto = 0;

   cout << "\n\nIngrese EL NRO. del color del automovil: 1-NEGRO, 2-ROJO, 3-BLANCO, 4-AZUL:";
   cin >> color;

   cout << "\nIngrese EL NRO. del tapizado del automovil: 1-VINILO, 2-CUERO, 3-TELA: ";
   cin >> tapizado;

   switch (color){
      case 1:
      {
         switch (tapizado){
            case 1:
            {
               precioAuto = 250 + 150;
               break;
            }
            case 2:
            {
               precioAuto = 250 + 750;
               break;
            }
            case 3:
            {
               precioAuto = 250 + 200;
               break;
            }
         }
         break;
      }
      case 2:
      {
         switch (tapizado){
            case 1:
            {
               precioAuto = 200 + 150;
               break;
            }
            case 2:
            {
               precioAuto = 200 + 750;
               break;
            }
            case 3:
            {
               precioAuto = 200 + 200;
               break;
            }
         }
         break;
      }
      case 3:
      {
         switch (tapizado){
            case 1:
            {
               precioAuto = 180 + 150;
               break;
            }
            case 2:
            {
               precioAuto = 180 + 750;
               break;
            }
            case 3:
            {
               precioAuto = 180 + 200;
               break;
            }
         }
         break;
      }
      case 4:
      {
         switch (tapizado){
            case 1:
            {
               precioAuto = 190 + 150;
               break;
            }
            case 2:
            {
               precioAuto = 190 + 750;
               break;
            }
            case 3:
            {
               precioAuto = 190 + 200;
               break;
            }
         }
         default:
            cout << "ERROR"<<endl;
            break;
      }
   }
  
   cout <<"\n\nEl precio final del automovil es : " <<precioAuto <<"\n\n"<< endl;
}
 */


//EJERCICIO REALIZADO CON IF ANIDADO
/* int main(){
   string color;
   string tapizado;

   int precioAuto = 0;

   cout << "\n\nIngrese EL NRO. del color del automovil: ";
   cin >> color;

   cout << "\nIngrese EL NRO. del tapizado del automovil: ";
   cin >> tapizado;

   if (color == "Negro"){
      if (tapizado == "Vinilo"){
         precioAuto = 250 + 150;
      }else if(tapizado == "Cuero"){
         precioAuto = 250 + 750;
      }else if(tapizado == "Tela"){
         precioAuto = 250 + 200;
      }
   }else if(color == "Rojo"){
      if (tapizado == "Vinilo"){
         precioAuto = 200 + 150;
      }else if(tapizado == "Cuero"){
         precioAuto = 200 + 750;
      }else if(tapizado == "Tela"){
         precioAuto = 200 + 200;
      }
   }else if(color == "Blanco"){
      if (tapizado == "Vinilo"){
         precioAuto = 180 + 150;
      }else if(tapizado == "Cuero"){
         precioAuto = 180 + 750;
      }else if(tapizado == "Tela"){
         precioAuto = 180 + 200;
      }
   }else if(color == "Azul"){
      if (tapizado == "Vinilo"){
         precioAuto = 190 + 150;
      }else if(tapizado == "Cuero"){
         precioAuto = 190 + 750;
      }else if(tapizado == "Tela"){
         precioAuto = 190 + 200;
      }
   }else{
      cout <<"\n\nEl precio del automovil es CERO por error en el ingreso de las opciones";
   }


   cout <<"\n\nEl precio final del automovil es : " <<precioAuto <<"\n\n"<< endl;  
} */

//USO ENUMERATIVOS 
int main(){
   int color;
   int tapizado;

   int precioAuto = 0;

   enum COLOR {Negro, Rojo, Blanco, Azul};
   enum TAPIZADO {Vinilo, Cuero, Tela};
    
   cout << "\n\nIngrese EL NRO. del color del automovil: 0-NEGRO, 1-ROJO, 2-BLANCO, 3-AZUL: ";
   cin >> color;

   cout << "\nIngrese EL NRO. del tapizado del automovil: 0-VINILO, 1-CUERO, 2-TELA: ";
   cin >> tapizado;

   switch (color){
      case 0:
         {
            if (tapizado == 0){
               precioAuto = 250 + 150;
            }else if(tapizado == 1){
               precioAuto = 250 + 750;
            }else if(tapizado == 2){
             precioAuto = 250 + 200;
            }else{
               cout <<"ERROR"<<endl;
            }
            break;
         }
      case 1:
         {
            if (tapizado == 0){
               precioAuto = 200 + 150;
            }else if(tapizado == 1){
               precioAuto = 200 + 750;
            }else if(tapizado == 2){
               precioAuto = 200 + 200;
            }else{
               cout <<"ERROR"<<endl;
            }
            break;
         }
      case 2:
         {
            if (tapizado == 0){
               precioAuto = 180 + 150;
            }else if(tapizado == 1){
               precioAuto = 180 + 750;
            }else if(tapizado == 2){
               precioAuto = 180 + 200;
            }else{
               cout <<"ERROR"<<endl;
            }
            break;
         }
      case 3:
         {
            if (tapizado == 0){
               precioAuto = 190 + 150;
            }else if(tapizado == 1){
               precioAuto = 190 + 750;
            }else if(tapizado == 2){
               precioAuto = 190 + 200;
            }else{
               cout <<"ERROR"<<endl;
            }
            break;
         } 
      default:
      {
         cout <<"ERROR"<<endl;
         break;
      }
   }

   cout <<"\n\nEl precio final del automovil es : " << precioAuto <<" pesos\n\n"<< endl;
}