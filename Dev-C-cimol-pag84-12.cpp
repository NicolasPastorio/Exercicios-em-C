#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag84-12
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
 	
 	//declara��o de vari�veis
 	float a, b, c, delta;
 	
 	//------------------cabe�alho-------------------
 	printf("\n");
 	printf("-----------------------------------\n");
 	printf("      FUN��O DO SEGUNDO GRAU\n");
 	printf("----------------------------------\n");
 	printf("\n");
 	//----------------------------------------------
	
	//---------------guarda-valores-----------------
 	printf("\n");
	printf("----------------------------------\n");
	printf("Favor informe o valor para a, b e c \n");
	printf("para a formula = ax(2) +bx +c\n");
	printf("sendo a  diferente de zero!\n");
	printf("valor de a: ");
	scanf("%f", &a);
	if(a = 0){
		printf("\n");
		printf("----------------------------------\n");
		printf("A equa��o n�o � do segundo grau!\n");
		printf("----------------------------------\n");
		printf("\n");
	} else {
			printf("valor de b: ");
			scanf("%f", &b);
			printf("valor de c: ");
			scanf("%f", &c);
			printf("----------------------------------\n");
		 	printf("\n");
		 	
		 	delta = (b*b)-(4*a*c);
		 	
		 	if(delta < 0){
		 		printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equa��o n�o possue ra�zes reais!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 } else if(delta = 0){
				printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equa��o possue apenas uma ra�ze real!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 } else{//delta > 0
			 	printf("\n");
		 		printf("----------------------------------\n");
		 		printf("A equa��o possue duas ra�zes reais!\n");
		 		printf("----------------------------------\n");
		 		printf("\n");
			 }
				
		}
	//----------------------------------------------
 	
	system("Pause");
	return 0;
}
