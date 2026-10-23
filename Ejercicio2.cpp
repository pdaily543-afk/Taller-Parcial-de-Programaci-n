#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout << "Ingrese a y b (1 <= a <= b): ";
    cin >> a >> b;

    if (a < 1 || a > b || b < 1) {
        cout << "Rango no valido "<< endl;
        return 0;
    }
    
    int perfectos = 0;
    int abundantes = 0;
    int deficientes = 0;

    for ( int num = a; num <= b; num++){
        int suma = 0;
        for (int d = 1; d <= num/2; d++){
            if (num % d == 0){
                suma = suma + d;
            }
        }

        if (suma == num){
            cout << num << " : perfecto (suma de divisores = " << suma << " )"<<endl;
            perfectos++;
        }
        else if (suma > num){
            cout << num << " : abundante (suma divisores = " << suma << " )"<<endl;
            abundantes++;
        }
        else{
            cout << num << " : deficientes (suma de divisores = " << suma << " )"<<endl;
            deficientes++;
        }
    }

    cout << "Perfectos: " << perfectos << ", abundamtes: "<< abundantes << ", deficientes: " << deficientes << endl;
    
    return 0;

}