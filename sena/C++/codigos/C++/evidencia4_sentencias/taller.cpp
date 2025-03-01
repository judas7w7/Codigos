#include <iostream>

using namespace std;

int main () {
    cout<<"¿Cuantas notas desea ingresar?"<<endl;
    float cantidad=0;
    cin>>cantidad;
    float nota=0;
    float n_final=0;
    float suma;
    for (float i = 0; i < cantidad; i++)
    {
        cout<<"Por favor ingrese la nota "<< i+1 << " (ej; 4.5)" <<endl;
        cin>>nota;
        suma += nota;
        
    }
    n_final= suma / cantidad;
    cout<<"Su promedio es de: "<<n_final<<endl;
    
}