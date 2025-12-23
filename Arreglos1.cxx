#include <iostream>

using namespace std;
int main() {
    int numeros[] = {1, 4, 5, 6, 7};
    int suma = 0; 
                
    for (int i = 0; i < 5; i++) { 
        suma += numeros[i];
    }

    cout << "La suma del vector/arreglo es: " << suma << endl;
    
    cin.get();
    return 0;
}

