#include<iostream>
using namespace std ;
int main (){
    int numeros[100][100];
    int filas, columnas;
    char band = 'V';
    cout<<"Este programa se encargara en saber si la siguiente matriz es simetrica\n";
    cout<<"(cuadrada y igual a su traspuesta)"<<endl;
    cout<<"Ingrese el numero de filas :";
    cin >>filas;
    cout<<"Ingrese el numero de columnas:";
    cin >>columnas;
    

    for(int i= 0;i<filas ; i++){
     for(int j=0; j<columnas;j++){
            cout<<"Ingresa los valores de numeros ["<<i<<"]"<<"["<<j<<"]:";
            cin>>numeros[i][j];
            }
    }
    cin.ignore();
    //
    if(filas==columnas){
        for(int i=0;i<filas && band=='V';i++){
            for(int j=0;j<columnas && band=='V';j++){
                if(numeros[i][j] != numeros[j][i]){
                    band = 'F'; // Si encontramos una diferencia, no es simétrica
                }
            }
        }
    }
        
    if(band == 'V'){
        cout<<"La matriz es simetrica";
    }
    else{
        cout<<"La matriz no es simetrica";
    }
  

    cin.get();
    return 0; 
}