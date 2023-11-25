#include<iostream>

using namespace std;

int main(){
    /* int a = 5;
    int b = 10;

    //OPERADORES SUMA, RESTA, MULTIPLICACIÓN Y DIVISIÓN ABREVIADOS
    //Operador += suma la cantidad que hay en b a la de a
    // Es lo mismo que hacer c=a+b pero hay que crear una tercer variable para guardar el resultado de la suma
    //Pasa lo mismo con los operadores -=, *=, /=

    a+=b;

    cout << "El valor de a + b es = " << a << endl; */

    
    //OPERADORES INCREMENTALES USANDO PREFIJOS Y SUFIJOS
    /* int a = 5;
    int b = 5;

    int z = ++a; //En este caso la variable a se incrementa en 1 antes de almacenarse el resultado  en z porque tiene los + antes(prefijo) de la variable

    cout << " La variable z vale: "<< z << endl;

    cout << " La variable a vale: "<< a << endl;

    int w = b++;     //En este caso la variable b se incrementa en 1 después de almacenarse el resultado  en w porque tiene los + después(sufijo) de la variable

    cout << " La variable w vale: "<< w << endl;

    cout << " La variable b vale: "<< b << endl; */

    //OPERADOR DE MÓDULO O RESIDUO %
    //Hacer un ejercicio usando módulo que averigüe si un número ingresado es primo
   /*  int num = 0;

    cout << "Ingrese un número entero positivo por teclado: ";
    cin >> num;

    bool es_primo = true;

    for(int i=2; i<=num/2; i++){
        if (num % i == 0){
            es_primo =false; 
            break;
        }
    }
    if( es_primo){
        cout << "El número "<< num << " Es primo " <<endl;
    } else {
        cout << "El número "<< num << " No es primo " <<endl;
    }
 */

    //  TRABAJAR CON OPERACIONES Y CONVERSIONES EN C++

    // auto a = 3; recordar que cuando no sabemos precisar el tipo de dato podemos usar auto que de acuerdo al contenido que le pongamos a la variable c++ lo reconocerá 

    /* int a = 3;

    float b = 4.0f;

    double c = 8.0;

    auto resultado = a + b;

    cout << typeid(resultado).name();  //Esto no indicará de que tipo de datos es la expresión I-entero f-float d-double */

    //EJEMPLO CALCULANDO LA MEDIA ARITMÉTICA

    int a = 10;

    double b = 12;

    int c = 30;

    double  media = (a+b+c)/3;

    cout <<"La media aritmética de los 3 valores es:  "<< media << endl;

    cout << "El tipo de dato de la variable media es: "<< typeid(media).name();
}