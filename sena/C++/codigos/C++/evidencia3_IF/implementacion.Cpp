#include <iostream>

using namespace std;

int main () {
    int edad;
    cout<<"Por favor ingrese la edad de su hijo"<<endl;
    cin>>edad;
    if (edad > 0 && edad < 6)
    {
        cout<<"Su hijo pertenece a primera infancia"<<endl;
    }
    else if (edad > 6 && edad < 12)
    {
        cout<<"Su hijo pertenece a segunda infancia"<<endl;
    }
    else if (edad > 12 && edad < 18)
    {
        cout<<"Su hijo pertenece a lso adolecentes"<<endl;
    }
    else {
        cout<<"Error"<<endl;
    }
    
}