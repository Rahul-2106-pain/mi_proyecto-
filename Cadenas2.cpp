#include <iostream>
#include <string.h>
#include <string>
using namespace std ; 
int main (){
    //Usando la libreria <string.h> de C 
    string name;
    int longitud = 0 ;
    cout<<"Ingrese su nombre: ";
    getline(cin, name);
    longitud = name.length();

    cout<<"La longitud de tu nombre es:"<<longitud<<endl;   

    //Usan do la libreria <string> de C++
    string nombre ;
    int longitud2 = 0 ;
    cout <<"Ingrese su nombre: ";
    getline(cin,nombre);
    
    
    longitud2 = nombre.length();
    cout <<"La cantidad de caracteres que tiene nombres es"<<longitud2<<endl; 

    cin.get();
    return 0 ; 
}