#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag83-11
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	float salario, salAtual, valAumento;
	int aumento;
	
	printf("Informe o sal�rio do colaborador: R$");//requisi��o ao usu�rio
	scanf("%f", &salario);//armazenamento do nalor na vari�vel
	printf("\n");
	
	//------------Aninhamento para c�lculo--------------------
	if(salario <= 280.0 && salario > 0){
		valAumento = salario*0.2;//20% = 20/100
		salAtual = salario + valAumento;
	  //salAtual = salario + seu aumento de 20%
	  aumento = 20;
	}
	else if(salario > 280.0 && salario <= 700.0){
		valAumento = salario*0.15;//15% = 15/100
		salAtual = salario + valAumento;
	  //salAtual = salario + seu aumento de 15%	
		aumento = 15;
	} 
	else if(salario > 700.0 && salario <= 1500.0){
		valAumento = salario*0.1;//10% = 10/100
		salAtual = salario + valAumento;
	  //salAtual = salario + seu aumento de 10%
		aumento = 10;
	}
	else if(salario > 1500.0){
		valAumento = salario*0.05;//5% = 5/100
		salAtual = salario + valAumento;
	  //salAtual = salario + seu aumento de 5%
		aumento = 5;
	}
	else if(salario <= 0){//idiot prove 01
		printf("N�o estamos trabalhando com d�vidas!\n");
	}
	else {printf("O valor inserido n�o � v�lido!\n");}
	//--------------------------------------------------------
	
	//---------------Aninhamento para impre��o----------------
	if(salario > 0){
		printf("Sal�rio anterior: R$%.2f", salario);
		printf("Percentual de aumento: %d%%; \n", aumento);
		printf("Valor do aumento: %.2f; \n", valAumento);
		printf("Sal�rio atual: R$%.2f; \n", salAtual);
	}
	//--------------------------------------------------------
	system("Pause");
	return 0;
}
