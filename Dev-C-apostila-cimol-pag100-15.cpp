#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-15

/*pedir dois n�meros ao usu�rio, 
mostrar a sua soma e informar se � 
par ou �mpar.*/
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma;
	
	printf("Favor, informe um n�mero inteiro: ");
	scanf("%d", &num1);
	printf("Favor, informe outro n�mero inteiro: ");
	scanf("%d", & num2);
	
	soma = num1 + num2;
	
	printf("A soma entre %d e %d � %d!\n", num1, num2, soma);
	
	if(soma % 2 == 0)
		printf("O valor %d � par!\n\n", soma);
	else
		printf("O valor %d � �mpar!\n\n", soma);
	
	system("Pause");
	return 0;
}
