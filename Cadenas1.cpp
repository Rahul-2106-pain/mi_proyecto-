#include <iostream>
#include <string.h>
#include <string>
using namespace std ;
int main (){
    //Usamos string con la libreria <string>, usado usualmente para C++
    string nombre4 = "Rahul";
    string nombre5;
    cout<<"Escriba su nombre : ";
    getline(cin,nombre5);
    cout<<"Tu nombre es:"<<nombre5<<endl;


    //Usamos char de la libreria <string.h>, usado en C 
    char nombre[]="Rahul";
    char nombre2[]={'R','A','H','U','L'};
    char nombre3[20];
    cout<<"Escriba su nombnre:";
    cin.getline(nombre3,20,'\n');
    cout<<"Tu nombre es :"<<endl;
    cin.get();
    return 0 ; 
}