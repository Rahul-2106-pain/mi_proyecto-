#include <iostream>
using namespace std ;
int main (){
     char letras1[] = {'a','b','c','d','e'};
     char letras2[] = {'f','g','h','i','j'};
     char letras3[10];
        for(int i = 0 ; i<5 ; i++ ){
            letras3[i]=letras1[i];
        }
        for(int i = 0 ; i<5 ; i++ ){
            letras3[i+5]=letras2[i+5];
        }
        cout<<"El vector combinado del 1 y 2 es : "<<endl;
       for (int i = 0 ; i<10 ; i++ ){
        cout<<letras3[i]<<", ";
       }

 cin.get ();
return 0 ; 
}