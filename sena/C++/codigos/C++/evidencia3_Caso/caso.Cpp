#include <iostream>

using namespace std;

int main (){
    float n1, n2 ,n3, n4, suma, n_final;
    cout<<"Ingrese la nota 1"<<endl;
    cin>>n1;
    cout<<"Ingrese la nota 2"<<endl;
    cin>>n2;
    cout<<"Ingrese la nota 3"<<endl;
    cin>>n3;
    cout<<"Ingrese la nota 4"<<endl;
    cin>>n4;
    suma= (n1 + n2 + n3 + n4);
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
    cout<<"Jimmy Caro Castro";
}
