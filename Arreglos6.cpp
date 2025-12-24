#include <iostream>
using namespace std ; 
int main () {
    int Numeros1[5] ={0};
    int Ndoble[5] = {0};

        cout<<"Ingrese los 5 valores para el vector: "<<endl;
        for( int i=0; i <5 ; i++){
            cout<<"Posicion "<<i<<" :";                
            cin>> Numeros1[i]; 
        }
        for( int i=0; i<5; i++){
               Ndoble[i]= 2*Numeros1[i];
          }
        cout<<"Los factores dobles del vector introducido son : "<<endl;
        for(int i=0 ; i<5; i++){
            cout<<"Posicion "<<i<<"-->"<<Ndoble[i]<<"\n";
        }
    cin.get();
    return 0 ; 
}