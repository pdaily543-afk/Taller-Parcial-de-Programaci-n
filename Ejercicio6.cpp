#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string contrasena;

    cout << "Ingrese la contrasena: ";
    getline(cin, contrasena);

    // Banderas booleanas (flags) para revisar en un solo recorrido
    bool tieneMayus = false;
    bool tieneMinus = false;
    bool tieneDigito = false;
    bool tieneSimbolo = false;

    // Recorrido de la cadena una sola vez
    for (int i = 0; i < (int)contrasena.length(); i++) {
        char c = contrasena[i];

        if (isupper(c)) {
            tieneMayus = true;
        } else if (islower(c)) {
            tieneMinus = true;
        } else if (isdigit(c)) {
            tieneDigito = true;
        } else if (c != ' ') {
            tieneSimbolo = true;
        }
    }

    // Comprobamos la longitud minima de 8
    bool cumpleLongitud = (contrasena.length() >= 8);

    // Si cumple todos los requisitos
    if (cumpleLongitud && tieneMayus && tieneMinus && tieneDigito && tieneSimbolo) {
        cout << "Contrasena valida." << endl;
    } else {
        // Mostramos exactamente cuales requisitos fallaron
        if (!cumpleLongitud) {
            cout << "- Debe tener al menos 8 caracteres." << endl;
        }
        if (!tieneMayus) {
            cout << "- Falta al menos una letra mayuscula." << endl;
        }
        if (!tieneMinus) {
            cout << "- Falta al menos una letra minuscula." << endl;
        }
        if (!tieneDigito) {
            cout << "- Falta al menos un digito." << endl;
        }
        if (!tieneSimbolo) {
            cout << "- Falta al menos un simbolo." << endl;
        }
        cout << "Contrasena invalida." << endl;
    }

    return 0;
}