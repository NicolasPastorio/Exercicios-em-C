#include <stdio.h>
#include <stdlib.h>
//05
int main(){
	
	//declara��o de vari�veis
	int num1, num2, valor;
	char sinbol;
	
	//requisi��o ao usu�rio
	printf("Favor informar dois valores inteiros: \n");
	printf("Valor 1: ");
	scanf("%d", &num1);
	printf("Valor 2: ");
	scanf("%d", &num2);
	printf("\n");
	printf("Favor informar a operacao (+, -, *, /): ");
	scanf("%s", &sinbol);
	printf("\n");
	
	//estrutura condicionla aninhada
	if (sinbol == '+'){
		valor = num1 + num2;
		printf("%d + %d = %d.\n", num1, num2, valor);
	} else if (sinbol == '-'){
			valor = num1 - num2;
			printf("%d - %d = %d!\n", num1, num2, valor);
	} else if (sinbol == '*'){
		valor = num1 * num2;
		printf("%d x %d = %d!\n", num1, num2, valor);
	} else if (sinbol == '/'){
		if (num2 == 0){
			printf("Divisao por zero(0) nao permitido!\n");
		} else {
			valor = num1 / num2;
			printf("%d / %d = %d!\n", num1, num2, valor);
		}
	} else 
		printf("O valor inserido e invalido!\n\n");
	
	system("Pause");
	return 0;
}
