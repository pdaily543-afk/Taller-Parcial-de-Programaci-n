#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    char opcion;
    int k;
    string mensaje;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;
    cout << "Desplazamiento: ";
    cin >> k;
    cin.ignore();
    cout << "Mensaje: ";
    getline(cin, mensaje);

    opcion = toupper(opcion);
    if (opcion != 'C' && opcion != 'D') {
        cout << "Opcion invalida." << endl;
        return 0;
    }

    if (opcion == 'D') {
        k = -k;
    }

    k = k % 26;
    if (k < 0) {
        k = k + 26;
    }

    string resultado = "";
    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];
        if (isupper(c)) {
            c = 'A' + (c - 'A' + k) % 26;
        } else if (islower(c)) {
            c = 'a' + (c - 'a' + k) % 26;
        }
        resultado += c;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}
