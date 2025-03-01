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
    
    cout<<"Digite la cantidad de zapatos"<<endl;
    int cantidad;
    cin>>cantidad;
    
    cout<<"Digite el costo de la unidad del zapato"<<endl;
    float cos_u;
    cin>>cos_u;
    float cos_t;
    cos_t=cos_u*cantidad;
    
    cout<<"Digite el precio por unidad"<<endl;
    int precio;
    cin>>precio;
    float precio_t;
    precio_t=precio*cantidad;

    float util_u;
    float util_t;
    util_u=precio-cos_u;
    util_t=precio_t-cos_t;
    float porcentaje;
    porcentaje=(cos_t/precio_t)*100;
    

    cout<<"Los datos registrados son los siguientes:"<<endl;
    cout<<endl;
    cout<<"Referencia: "<<refe<<endl;
    cout<<"Descripcion: "<<descrip<<endl;
    cout<<"Talla: "<<talla<<endl;
    cout<<"Disponibilidad: "<<letra<<endl;
    cout<<"Costo por unidad: "<<cos_u<<endl;
    cout<<"Costo total: "<<cos_t<<endl;
    cout<<"Precio por unidad: "<<precio<<endl;
    cout<<"Precio total: "<<precio_t<<endl;
    cout<<"Utilidad por unidad: "<<util_u<<endl;
    cout<<"Utilidad total: "<<util_t<<endl;
    cout<<"Porcentaje de utilidad: "<<porcentaje<<endl;

    cout<<"Gracias por digitar la informacion"<<endl;
    cout<<"Jimmy Caro Castro";
}