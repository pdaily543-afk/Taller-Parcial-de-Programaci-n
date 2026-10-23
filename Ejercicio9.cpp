#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int opcion;
    string cadena;

    cout << "1. Comprimir" << endl;
    cout << "2. Descomprimir" << endl;
    cout << "Opcion: ";
    cin >> opcion;
    cin.ignore();

    if (opcion == 1) {
        cout << "Cadena: ";
        getline(cin, cadena);

        bool tieneDigito = false;
        for (int j = 0; j < cadena.length(); j++) {
            if (isdigit(cadena[j])) {
                tieneDigito = true;
            }
        }

        if (tieneDigito || cadena.length() == 0) {
            cout << "Cadena invalida: no debe estar vacia ni contener digitos." << endl;
        } else {
            string resultado = "";
            int i = 0;

            while (i < cadena.length()) {
                char actual = cadena[i];
                int cuenta = 0;

                while (i < cadena.length() && cadena[i] == actual) {
                    cuenta++;
                    i++;
                }

                resultado += actual;
                resultado += to_string(cuenta);
            }

            cout << "Comprimida: " << resultado << endl;
        }

    } else if (opcion == 2) {
        cout << "Cadena: ";
        getline(cin, cadena);

        bool valido = true;
        string resultado = "";
        int i = 0;

        if (cadena.length() == 0) {
            valido = false;
        }

        while (valido && i < cadena.length()) {
            char letra = cadena[i];

            if (isdigit(letra)) {
                valido = false;
            } else {
                i++;
                int cantidad = 0;
                bool hayDigitos = false;

                while (i < cadena.length() && isdigit(cadena[i])) {
                    cantidad = cantidad * 10 + (cadena[i] - '0');
                    hayDigitos = true;
                    i++;
                }

                if (!hayDigitos || cantidad == 0) {
                    valido = false;
                } else {
                    for (int j = 0; j < cantidad; j++) {
                        resultado += letra;
                    }
                }
            }
        }

        if (valido) {
            cout << "Descomprimida: " << resultado << endl;
        } else {
            cout << "Formato invalido." << endl;
        }

    } else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}