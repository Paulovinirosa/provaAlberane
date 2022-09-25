#include <iostream>

using namespace std;

int main() {	

setlocale (LC_ALL, "Portuguese");

int numero, aux, temporaria, ultimo=1, penultimo=1;

    cout << "Insira o número de termos: ";
    cin >> numero;

    cout << penultimo << endl << ultimo << endl;

    for(aux=3 ; aux<=numero ; aux++){
        cout << (ultimo + penultimo) << endl;

        temporaria = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + temporaria;
    }

    return 0;
}