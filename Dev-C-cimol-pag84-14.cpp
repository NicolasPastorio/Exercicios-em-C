#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag84-14
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int codigo;
	
	printf("----------------------------------------\n");
	printf("       AG�NCIA DOS CORREIOS\n");
	printf("----------------------------------------\n");
	printf("Digite o c�digo de destino inpresso na caixa: (1 ate 29)_");
	scanf("%d", &codigo);
	printf("----------------------------------------\n");
	
	if(codigo >= 1 && codigo <= 5)
		printf("DESTINO: Brasil.\n");
	else if(codigo >= 6 && codigo <= 9)
		printf("DESTINO: EUA.\n");
	else if(codigo >= 10 && codigo <= 12)
		printf("DESTINO: R�ssia.\n");
	else if(codigo >= 15 && codigo <= 20 || codigo >= 30 && codigo <= 35)
		printf("DESTINO: Su��a.\n");	
	else if(codigo >= 13 && codigo <= 14)
		printf("DESTINO: Afeganist�o.\n");
	else if(codigo >= 21 && codigo <= 29)
		printf("DESTINO: Fran�a.\n");
	else 
		printf("O valor digitado n�o � v�lido!\n");
		
	system("Pause");
	return 0;
}
