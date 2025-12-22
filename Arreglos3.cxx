#include<iostream>
using namespace std ;
int main(){
    int numeros[]= {1,2,3,4,5};
    int m = 0 ;
    cout<<"Vector a la inversa:"<<endl;

    for(int i = 4; i>-1; i--){
        cout<<m<<"-->"<<numeros[i]<<endl;
        m++;
       }

return 0 ; 
}