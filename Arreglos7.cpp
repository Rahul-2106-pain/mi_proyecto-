#include <iostream>
using namespace std ;
int main (){
    int numeros[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Mostrando la matriz:\n";
    for(int i = 0 ; i<3; i++){
        for(int j=0;j<3;j++){
            cout<<numeros[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"Mostrando la diagonal principal de la matriz\n";
    for( int i = 0 ; i<3;i++){
         cout<<numeros[i][i]<<"\n";
           }
           
     cin.get();
     return 0 ; 
}