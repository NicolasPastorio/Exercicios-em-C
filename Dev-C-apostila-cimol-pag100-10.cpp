#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-10
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*solicitar ao usu�rio n�meros inteiros infinitamente
	at� que seja informado zero(0), quando ir� parar a 
	execuc�o do ciclo e informado a soma de todos os valores 
	informados!
	*/
	
	//vari�vel com quantidade de valores ilimitados
	int soma = 0, a;//receber� a somo de todos os valores informados
	int valor[a];
	
	printf("Favor, iformar diverssos n�meros inteiros!\n "
		"Caso deseje que o programa encerre � s� informar zero(0)!\n"
		);
	
	for (a = 0; ; a++){
		printf("Informe o %do valor: ", a+1);
		scanf("%d", &valor[a]);
		soma = soma + valor[a];
		if(valor[a] == 0){ break; }
	}
	
	printf("A soma de todos valores informados �: %d\n", soma);
	
	system("Pause");
	return 0;
}
