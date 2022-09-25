#include <iostream>
using namespace std;
void tempo(int);

int main(){
	tempo(16);
	//insira aqui o valor que deseja contar
}

void tempo(int contar)
{
	while (contar > 0)
	{
		cout << contar << endl;
		contar--;
	}
	
	cout << "Tempo acabou!!" << endl;
}
