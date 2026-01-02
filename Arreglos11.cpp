#include<iostream>
using namespace std;
int main (){
    int numeros[3][3],multi[3][3],resultado[3][3];
    cout<<"Este programa multiplicara 2 matrices de 3 filas y 3 columnas\n";
    //Pedirle al usuario que ponga su matriz de 3x3
    cout<<"Ingrese los valores de la primera matriz\n";
    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"Ingrese los valores ["<<i<<"]["<<j<<"]";
            cin>>numeros[i][j];
        }
    }
    
    cout<<"Ingrese los valores de la segunda matriz\n";
    for(int i=0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<"Ingrese los valores ["<<i<<"]["<<j<<"]";
            cin>>multi[i][j];
        }
    }
    
    // Ahora multiplicaremos las matrices, empezando con la primera columna x la primera fila 
    	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			resultado[i][j]=0;
			for(int k=0;k<3;k++){
				resultado[i][j] = resultado[i][j] + numeros[i][k]* multi[k][j];
			}
		}
	}
	
	//Resultado de la multiplicacion
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<resultado[i][j]<<"  ";
		}
		cout<<"\n";
	}
    
    cin.get();
    return 0 ;
}