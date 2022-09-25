#include <iostream>
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main() {	

setlocale (LC_ALL, "Portuguese");

      int dia, mes, ano, a, b, c, d;
      
      cout << "DIGITE O DIA DO NASCIMENTO: " << endl;
      cin >> dia;
      cout << "DIGITE O MES DO NASCIMENTO: " << endl;
      cin >> mes;
      cout << "DIGITE O ANO DO NASCIMENTO: " << endl;
      cin >> ano;   
	  
	  a=(dia*100 + mes) + ano;
      b=(a/100) + (a % 100);
      c= b%5;
	  
      if(d%5==0)
      cout << "PERFIL TIMIDO" <<endl;
      else if(d%5==1)
      cout << "PERFIL SONHADOR" <<endl;
      else if(d%5==2)
      cout << "PERFIL PAQUERADOR" <<endl;
      else if(d%5==3)
      cout << "PERFIL ATRAENTE" <<endl;
      else if(d%5==4)
      cout << "PERFIL IRRESISTIVEL" << endl;
                       

return(0);
                       
}