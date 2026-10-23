#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Ingrese N (>= 1): ";
    cin >> N;

    if (N < 1) {
        cout << "Valor invalido." << endl;
        return 0;
    }

    int mejorNumero = 1;
    long long mejorPasos = 0;
    long long mejorMaximo = 1;

    for (int inicio = 1; inicio <= N; inicio++) {
        long long x = inicio;
        long long pasos = 0;
        long long maximo = x;

        while (x != 1) {
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
            pasos++;

            if (x > maximo) {
                maximo = x;
            }
        }

        if (pasos > mejorPasos) {
            mejorNumero = inicio;
            mejorPasos = pasos;
            mejorMaximo = maximo;
        }
    }

    cout << "Numero con la secuencia mas larga: " << mejorNumero << endl;
    cout << "Pasos: " << mejorPasos << endl;
    cout << "Valor maximo alcanzado: " << mejorMaximo << endl;

    return 0;
}