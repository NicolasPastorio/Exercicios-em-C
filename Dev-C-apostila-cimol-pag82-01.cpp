#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag82-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int escolha;
	
	printf("Escolha um dia da semana: \n"
		"-----------------\n"
		"[1]Domingo;\n"
		"[2]Seunda-feira;\n"
		"[3]Ter�a-feira;\n"
		"[4]Quarta-feira;\n"
		"[5]Quinta-feira;\n"
		"[6]Sexta-feira;\n"
		"[7]S�bado;\n"
		"-----------------\n"
	);
	scanf("%d", &escolha);
	
	switch(escolha){
		case 1:
			printf("Fim-de-semana.\n");
			break;
		case 2: 
			printf("Dia �til.\n");
			break;
		case 3:
			printf("Dia �til.\n");
			break;
		case 4:
			printf("Dia �til.\n");
			break;
		case 5:
			printf("Dia �til.\n");
			break;
		case 6:
			printf("Dia �til.\n");
			break;
		case 7:
			printf("Fim-de-semana.\n");
			break;
		default: 
			printf("Foi digitado um valor invv�lido.\n");
	}
	
	system("PAUSE");
	return 0;
}
