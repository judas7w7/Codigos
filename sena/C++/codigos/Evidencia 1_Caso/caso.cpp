#include <iostream>
#include <String>
using namespace std;

int main(){
    cout<<"Digete la referencia del zapato"<<endl;
    int refe;
    cin>>refe;

    cout<<"Digite una descripcion del zapato"<<endl;
    string descrip;
    cin>>descrip;

    cout<<"Digite la talla"<<endl;
    int talla;
    cin>>talla;

    cout<<"Digite la letra si esta disponeible o no para la venta  S/N"<<endl;
    char letra;
    cin>>letra;
    
    
    cout<<"Digite el costo del zapato"<<endl;
    int cos;
    cin>>cos;
    cout<<"Digite el precio de venta del zapato"<<endl;
    int precio;
    cin>>precio;

    cout<<"Los datos registrados son los siguientes:"<<endl;
    cout<<endl;
    cout<<"Referencia: "<<refe<<endl;
    cout<<"Descripcion: "<<descrip<<endl;
    cout<<"Talla: "<<talla<<endl;
    cout<<"Disponibilidad: "<<letra<<endl;
    cout<<"Costo: "<<cos<<endl;
    cout<<"Precio: "<<precio<<endl;

    cout<<"Gracias por digitar la informacion"<<endl;
    cout<<"Jimmy Caro Castro";
}