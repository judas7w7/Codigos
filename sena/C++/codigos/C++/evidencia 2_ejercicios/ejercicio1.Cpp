#include <iostream>
using namespace std;

int main () {
    cout <<"Por favor ingrese el valor a multiplicar"<<endl;
    int a;
    cin>> a;
    for (int i = 1; i < 11; i++)
    {
        cout<<"El numero " << a << " x " << i << " es: " << a*i <<endl;
    }
    cout<<"Gracias"<<endl;
}