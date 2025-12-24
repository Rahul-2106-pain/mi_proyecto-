#include <iostream>
using namespace std ;
int main (){
    int numeros[5];
    for(int i = 0 ; i<5 ; i++ ){
    cout<<"Ingrese el elemento para la posicion "<< i<< ":";
    cin>> numeros[i];
    }
    cin.ignore(); 
    for ( int i=0 ; i< 5 ; i++) {
         cout<<"La posicion "<< i << " es "<<numeros[i]<<endl;    
        
    }
    cin.get();
    return 0 ;
}