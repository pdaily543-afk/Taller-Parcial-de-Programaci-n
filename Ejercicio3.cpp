#include <iostream>
using namespace std;

int main (){
    int n;

    do{
        cout << " Ingrese la altura del rombo" << " (entero impar positivo) : ";
        cin >> n;

        if ( n <= 0 || n % 2 == 0){
            cout << "Valor invalido, intente de nuevo." << endl;
        }
    } while ( n <=0 || n % 2 == 0);

    char caracter; 

    cout << " Ingrese el caracter: ";
    cin >> caracter;

    int centro = ( n + 1) / 2;

    for ( int i = 1; i <= n; i++){
        int distancia;

        if ( i < centro){
            distancia = centro - i;
        }
        else {
            distancia = i - centro;
        }

        int espacio = distancia;
        int simbolos = n - 2* distancia;

        for ( int j = 0; j < espacio; j++){
            cout << " ";
        }

         for ( int j = 0; j < simbolos; j++){
            cout << caracter;
         }

         cout << endl;
    }
    
    return 0;

}