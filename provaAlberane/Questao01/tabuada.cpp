#include <iostream>

using namespace std;

int main() {	

setlocale (LC_ALL, "Portuguese");

cout << "Insira o número: " << endl;

int numero = 0;
cin >> numero;

for(int i= 1; i<=10; i++){
	cout << i << " x " << numero << " = " << i*numero << endl;
}
}