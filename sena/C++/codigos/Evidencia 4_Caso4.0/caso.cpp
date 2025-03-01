#include <iostream>
#include <String>
using namespace std;

int main(){
    cout<<"Desea registrar un zapato s/n"<<endl;
    string letra;
    string descrip;
    cin>>letra;

    while (letra == "s")
    {
    
        cout<<"Digete la referencia del zapato"<<endl;
        int refe;
        cin>>refe;

        cout<<"Digite una descripcion del zapato"<<endl;
        cin>>descrip;

        cout<<"Digite la talla"<<endl;
        int talla;
        cin>>talla;
        
        cout<<"Digite el costo del zapato"<<endl;
        int cos;
        cin>>cos;

        cout<<"desea registrar otro zapato s/n"<<endl;
        cin>>letra;
   
    }

    cout<<endl;
    cout<<"Gracias por digitar la informacion"<<endl;
    cout<<"Jimmy Caro Castro";
}