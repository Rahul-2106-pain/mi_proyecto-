#include <iostream>
using namespace std ;
int main (){
    int numeros[100][100],filas,columnas;
    int copia[100][100];

    cout<<"Ingrese el numero de filas de la matriz: ";
    cin>>filas ;
    cout<<"Ingrese el numero de columnas de la matriz :";
    cin>>columnas ; 

    for (int i=0 ; i<filas; i++){
        for(int j=0 ; j<columnas; j++){
            cout<<"Ingrese los valores "<<i<<" , "<<j<<" :";
            cin>>numeros[i][j]; 
            cin.ignore();
        }
    }

    for (int i=0 ; i<filas; i++){
        for(int j=0 ; j<columnas; j++){
            copia[i][j]=numeros[i][j];
        }
    }
     cout<<"Los valores copiados son : \n";
    for (int i=0 ; i<filas; i++){
        for(int j=0 ; j<columnas; j++){
            cout<<copia[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cin.get();
     return 0 ;
}