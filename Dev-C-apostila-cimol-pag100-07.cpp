#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-07
//ler valor e informar se � primo ou n�o
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int valor;
	
	printf("Informe um valor inteiro qualquer: ");
	scanf("%d", &valor);
	
	if (valor == 2){
		printf("O valor %d � primo!\n", valor);
	} else if (valor % 2 != 0 && valor > 2){
		printf("O valor %d � primo!\n", valor);
	} else printf("O valor %d n�o � primo!\n", valor);
		
		printf("       ----\n\n");
	
	
	system("Pause");
	return 0;
}
