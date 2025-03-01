#include <iostream>

using namespace std;

int main (){
    int j=1;
    while (j<10)
    {
        cout<<"Tabla del "<<j<<endl;
        j++;
    }
    cout<<"Seleccione una tabla de multiplicacion"<<endl;
    int tabla;
    cin>>tabla;
    for (int i = 0; i < 10; i++)
    {
        int resultado = tabla*(i+1);
        cout<<tabla<<" x "<<i+1<<" = "<<resultado<<endl;
    }
    
    cout<<"Jimmy Caro Castro";
    
}