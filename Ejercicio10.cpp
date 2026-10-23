#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;

    cout << "Numero de filas (1 a 15): ";
    cin >> n;

    if (n < 1 || n > 15) {
        cout << "Valor invalido." << endl;
        return 0;
    }

    for (int fila = 0; fila < n; fila++) {

        for (int e = 0; e < (n - 1 - fila) * 3; e++) {
            cout << " ";
        }

        int coef = 1;

        for (int k = 0; k <= fila; k++) {
            cout << setw(6) << coef;
            coef = coef * (fila - k) / (k + 1);
        }

        cout << endl;
    }

    return 0;
}