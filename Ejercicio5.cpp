#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string texto;

    cout << " Ingrese una frase: ",
    getline(cin, texto);

    bool esPalindromo = true;
    int n = texto.size();
    int i = 0;
    int j = n - 1;

    while ( i < j && esPalindromo){
        if (! ( (texto[i] >= 'A' && texto[i] <= 'Z') ||  (texto [i] >= 'a' && texto [i] <= 'z') || (texto [i] >= '0' && texto [i] <= '9'))){
            i++;
        }
        else if (! ( (texto[j] >= 'A' && texto[j] <= 'Z') ||  (texto [j] >= 'a' && texto [j] <= 'z') || (texto [j] >= '0' && texto [j] <= '9'))){
            j--;
        }
        else{
            char a = tolower(texto [i]);
            char b = tolower(texto [j]);

            if ( a != b){
                esPalindromo = false;
            }
            else{
                i++;
                j--;
            }
        }
    }
    if (esPalindromo){
        cout << "Es palindromo. " << endl;
    }
    else{
        cout << "No es palindromo. "<< endl;
    }

    return 0;
}