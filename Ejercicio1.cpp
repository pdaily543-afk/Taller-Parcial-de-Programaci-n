#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string frase;
    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int otros = 0;

    cout << "Ingrese una frase: ";
    getline(cin,frase);

    for (int i=0;i<frase.length(); i++){
        char c = frase[i];
        char letra = toupper(c);

        if (letra == 'A'|| letra =='E'|| letra == 'I'|| letra == 'O'|| letra == 'U'){
            vocales++;
        }
        else if(letra>='A' && letra<='Z'){
            consonantes++;
        }
        else if(c>='0' && c<='9'){
            digitos++;
        }
        else if (c == ' '){
            espacios++;
        }
        else {
            otros++;
        }

    }

    cout << "Vocales: " << vocales << endl;
    cout << "Consonates: " << consonantes << endl;
    cout << "Digitos: " << digitos << endl;
    cout << "Espacios: " << espacios << endl;
    cout << "Otros: " << otros << endl;

    return 0;


}

