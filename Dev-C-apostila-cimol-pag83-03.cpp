#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-03
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	//declara��o de vari�veis
	float salBruto, descontos, liquido, emprestimo, valor;
	float parcelas;
	
	printf("Informe seu sal�rio bruto: R$");	
	scanf("%f", &salBruto);//sal�rio bruto
	printf("Informe o valor dos descontos: R$");
	scanf("%f", &descontos);//descontos
	
	liquido = salBruto - descontos;//sal�rio sem descontos
	emprestimo = liquido * 0.3;//empr�stimo = 30% do sal�rio liquido
	
//	printf("O valor do emprestimo �: R$%.2f", emprestimo);

	printf("Favor informe o valor de empr�stimo que desejas adiquirir: R$");
	scanf("%f", &valor);//valor total de emrestimo
	printf("Informe as parcelas: ");
	scanf("%f", &parcelas);//em quantas vezes o usu�rio deseja dividir o total 
	
	valor /= parcelas;//execu��o do coment�rio anterior
	
	if(valor <= emprestimo){//valor limite de 30% para a aprova��o do emprestimo
		printf("Emprestimo aprovado!\n");
		printf("�timo, ser�o %.0f vezes de R$%.2f\n", parcelas, valor);
	}
		
	else{//caso maior que 30%
		printf("O emprestimo n�o pode ser aprovado, pois \n");
		printf(" escede o valor maximo permitido(R$%.2f)!\n", emprestimo);
	}
		
	system("PAUSE");
	return 0;
}
