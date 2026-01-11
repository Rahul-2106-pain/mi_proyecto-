//Diferencia escencial entre las matrices y cadenas
//Las matrices si son definidos como int o char, solo pueden almacenar esos tipos de datos
//En cambio una cadena puede almacenar todo tipo de dato 


#include <iostream>
#include <string.h>
#include <string>
using namespace std ;
int main (){
    //Usamos string con la libreria <string>, usado usualmente para C++
    string nombre4 = "Rahul";
    string nombre6 = "Rahul";
    string nombre5;
    cout<<"Escriba su nombre : ";
    getline(cin,nombre5);
    cout<<"Tu nombre es:"<<nombre5<<endl;


    //Usamos char de la libreria <string.h>, usado en C 
    char nombre[]="Rahul";
    char nombre2[]={'R','A','H','U','L'};
    char nombre3[20];
    cout<<"Escriba su nombre:";
    cin.getline(nombre3,20,'\n');
    cout<<"Tu nombre es :"<< nombre3<<endl;


    //Otra manera de usar una cadena falsa ( matriz unidimensional)
    int name4[20];
    for(int i=0;i<20; i++){

        cout<<"Escriba el valor name4["<<i<<"]: ";
        cin>>name4[i];
    }
    cin.ignore();
        cout<<"Los valores de la cadena name4 son : ";

        for(int i = 0 ; i<20 ; i++){
            cout<<name4[i];
        }

    cin.get();
    return 0 ; 
}