#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag83-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int divisor, dividendo;
	float divisao;
	
	printf("Informe um n�mero para o dividendo: ");
	scanf("%d", &dividendo);
	printf("Informe um n�mero para o divisor: ");
	scanf("%d", &divisor);
	
	if(divisor == 0){
		printf("ERRO!");
	}else{
		divisao = (float) dividendo/divisor;
		printf("%d dividido por %d � %.1f.\n", dividendo, divisor, divisao);
	}
		
	system("PAUSE");
	return 0;
}
