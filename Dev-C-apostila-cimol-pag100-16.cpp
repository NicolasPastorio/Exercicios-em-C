#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-16
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	float salbruto, descontos, emprestimo, porcento;
	int vezes;
	float parcelas, liquido;
	//f�or
	
	printf("Informe o sal�rio bruto do cliente: R$");
	scanf("%f", &salbruto);
	printf("Informe o valor total dos descontos: R$");
	scanf("%f", &descontos);
	
	//informa��es referesmtes ao empr�stimo
	printf("Informe o valor do empr�stimo que desejas fazer: R$");
	scanf("%f", &emprestimo);
	printf("Informe a quantidade de vezes que desejas fazer o empr�stimo: ");
	scanf("%d", &vezes);
	
	liquido = salbruto - descontos;
	parcelas = emprestimo / vezes;
	porcento = 0.3*liquido;
	
	if (porcento >= parcelas){
		printf("Parab�ns! O empr�stimo foi aprovado!\n\n");
	} else 
		printf("O empr�stomo foi recusado por esceder o sal�rio bruto!\n\n");
		
	printf("----------------------------------\n");
	printf("Sal�rio bruto R$%.2f \n", salbruto);
	printf("Valor dos descontos R$%.2f \n", descontos);
	printf("Sal�rio l�quido R$%.2f \n", liquido);
	printf("Valor do empr�stimo R$%.2f parcelado em %d vezes\n", emprestimo, vezes);
	printf("   fica por %d vezes de %.2f(30 por cento do sal�rio liquido)\n", vezes, parcelas);
	printf("Parcela m�xima permitida: R$%.2f\n", porcento);
	printf("----------------------------------\n\n");
	
	
	system("Pause");
	return 0;
}
