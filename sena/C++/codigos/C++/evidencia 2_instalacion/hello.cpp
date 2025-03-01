//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
//se incluye la libreria iostream para la entrada y salida de datos
#include <iostream>
//se utiliza el namespace con el nombre de std para poder acceder al paquete
using namespace std;
//se crea la funcion principal que es la del main
int main()
{
    //se crean dos variables de tipo entero para guardar los datos
 int a, b;
 //se muestra un mensaje solicitando el valor de la variable a
 cout << "Ingresa el primer numero"<<endl;
 //se guardara ese dato en la variable a
 cin >> a;
 //se muestra un mensaje solicitando el valor de la variable b
 cout << "Ingresa el segundo numero"<<endl;
 //se guardara ese dato en la variable b
 cin >> b;
 //Se muestra un mensaje para mostrar la suma
 //incluyendo la suma dentro y mostrarla con el mensaje
 cout <<"La suma de los numeros es: "<< a+b <<endl; 
  //Se muestra un mensaje para mostrar la resta
 //incluyendo la resta dentro y mostrarla con el mensaje
 cout <<"La resta de los numeros es: "<< a-b <<endl;
  //Se muestra un mensaje para mostrar la multiplicacion
 //incluyendo la multiplicacion dentro y mostrarla con el mensaje
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
  //Se muestra un mensaje para mostrar la division
 //incluyendo la division dentro y mostrarla con el mensaje
 cout <<"La division de los numeros es: "<< a/b <<endl;
  //Se muestra un mensaje para mostrar la residuo
 //incluyendo la residuo dentro y mostrarla con el mensaje
 cout <<"El residuo es: "<< a%b <<endl;
 //se ingresa un pause en caso de utilizar Dev-C++ para que el programa para hasta que el usuario 
 //ingrese algun dato
 system("pause");
 //se pone un return para verificar si el programa se ejecuto satisfactoriamente
 return EXIT_SUCCESS;
}