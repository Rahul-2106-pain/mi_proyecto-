#include<iostream>
using namespace std ;
int main (){
    int numeros[]= {1,3,4,5,13};
    int suma = 0 ;
    int mayor = 0 ; 

    for(int i= 0 ; i<5; i ++){
        suma += numeros[i];

        if (numeros[i]> mayor){
            mayor = numeros[i] ; 
        }
    }
     
     if(mayor== suma - mayor){
        cout<<"Si existe tal numero que su valor es igual al valor de la suma restante y el numero es:"<< mayor<<endl;
     }
     else{
     cout <<"No existe tal numero "<<endl;
     }

     return 0 ; 
}
