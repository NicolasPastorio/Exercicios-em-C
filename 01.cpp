#include <stdio.h>
#include <stdlib.h>
//01
int main(){
	//declara��o de variavel
	int inteiro;
	
	//requisi��o de valor ao usu�rio
	printf("----------------------------------\n");
	printf("Favor informar um numero inteiro: ");
	scanf("%d", &inteiro);
	printf("----------------------------------\n");
	printf("\n");
	
	if (inteiro % 2 == 0){//condi��o para valor par
		printf("----------------------------------\n");
		printf("O valor %d e PAR!\n", inteiro);
		printf("----------------------------------\n");	
	} else {//condi��o para valor �mpar
		printf("----------------------------------\n");
		printf("O valor %d e IMPAR!\n", inteiro);
		printf("----------------------------------\n");
	}
	
	
	system("Pause");
	return 0;
}
