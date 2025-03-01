#include <iostream>
using namespace std;

int main () {
    double vel_inicial, vel_final;
    double tiempo;
    cout<<"Por favor ingrese la velocidad inicial en metros"<<endl;
    cin>>vel_inicial;
    cout<<"Por favor ingrese la velocidad final en metros"<<endl;
    cin>>vel_final;
    cout<<"Por favor ingrese el tiempo total en segundos"<<endl;
    cin>>tiempo;
    double aceleracion;
    aceleracion = (vel_final - vel_inicial);
    cout<<"La aceleracion total es de: "<< aceleracion/tiempo <<endl;    
}
