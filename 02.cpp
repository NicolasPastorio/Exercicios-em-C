#include <stdio.h>
#include <stdlib.h>
//02
int main(){
	
	//declara��o de vari�veis
	int numero;
	
	//requisi��o de valor ao usu�rio
	printf("---------------------------------------------\n");
	printf("Favor, informar um numero inteiro qualquer: ");
	scanf("%d", &numero);
	printf("---------------------------------------------\n");
	
	//estrutura condicional
	if (numero >= 10 && numero <= 15){//caso a condi��o for verdadeira
		printf("---------------------------------------------\n");
		printf("O valor %d esta entre 10 e 15.\n", numero);
		printf("---------------------------------------------\n");	
	} else {//caso a condi��o n�o for verdadeira
		printf("---------------------------------------------\n");
		printf("O valor %d nao esta entre 10 e 15.\n", numero);
		printf("---------------------------------------------\n");	
	}
	
	system("Pause");
	return 0;
}
