#include <iostream>

using namespace std;

int main (){
    float nota, suma, n_final;
    for (float i = 0; i < 4; i++)
    {
        cout<<"Ingrese la nota"<< i+1<<endl;
        cin>>nota;
        suma += nota;
    }
    n_final = suma/4;

    if (n_final >= 30 && n_final < 35)
    {
        cout<<"En este momento no tiene aprobada la materia de tecnologia , pero tiene la oportunidad de recuperar."<<endl;
    } else if (n_final > 35 && n_final <= 50)
    {
        cout<<"Aprobo"<<endl;
    } else if (n_final < 30 )
    {
        cout<<"No aprobo"<<endl;
    } else {
        cout<<"Error vuelva a intentar"<<endl;
    }
    nota=0;
    suma=0;
    n_final=0;
    cout<<"Desea agregar las notas de otro estudiante" <<" (1 es si y el 0 es no)"<<endl;
    int opcion;
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        for (float i = 0; i < 4; i++)
    {
        cout<<"Ingrese la nota"<< i+1<<endl;
        cin>>nota;
        suma += nota;
    }
    n_final = suma/4;

    if (n_final >= 30 && n_final < 35)
    {
        cout<<"En este momento no tiene aprobada la materia de tecnologia , pero tiene la oportunidad de recuperar."<<endl;
    } else if (n_final > 35 && n_final <= 50)
    {
        cout<<"Aprobo"<<endl;
    } else if (n_final < 30 )
    {
        cout<<"No aprobo"<<endl;
    } else {
        cout<<"Error vuelva a intentar"<<endl;
    }
        break;
    
    default:
        break;
    }
    
   
    
}
