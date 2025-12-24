#include<iostream>
using namespace std ; 
int main (){
    int numeros1[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
    int numeros2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int suma[3][3];
    for (int i=0 ; i<3;i++){
        for(int j=0; j<3;j++){
          suma[i][j]=numeros1[i][j] + numeros2[i][j];
        }
    }
    cout<<"El resultado de la suma de los dos vectores es  :\n";
    for (int i=0 ; i<3;i++){
        for(int j=0; j<3;j++){
          cout<<suma[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cin.get();
    return 0 ; 
}
