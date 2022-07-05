#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-12
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Dado o n�mero 'n' de alunos, determinar a
	  maior e menor nota obtidas. 
	 (nota maxima=100 e m�nima = 0)*/
	
	int totalalunos;
	float maiornota = 0, menornota = 105;
	float notas[totalalunos];
	
	printf(
		"Para uma turma ser� pedido que inforeme a  \n"
		"quantidade de alunos e as notas dos mesmos; \n"
		"concidere nota m�xima = 100 e nota m�nima = 0, valores\n"
		"superiores ou inferiores a estes ser�o desconsiderados!\n"
		"Obs: use v�rgula para n�meros quebrados!(m�ximo 3 casas decimais)\n"
		"Favor informar a quantidade de alunos da turma: "
		);
	scanf("%d", &totalalunos);
	printf("\n");
	
	if(totalalunos > 0){
		for (int a = 0; a < totalalunos; a++){
			printf("informe a nota do aluno %d: ", a+1);
			scanf("%f", &notas[a]);
			if(notas[a] > 100 && notas[a] < 0){
				break;
			}
			//maior nota
			if(notas[a] > maiornota){
				maiornota = notas[a];
			}
			//menor nota
			if(notas[a] < menornota){
				menornota = notas[a];
			}
		}
		printf("A maior nota da turma foi %.2f! \n", maiornota);
		printf("A menor nota da turma foi %.2f! \n\n\n", menornota);
	}
	
	for(int a = 1; a < totalalunos; a++){
		if(notas[a] < 0 || notas[a] > 100){
			printf(
			"O programa encerrou!\n"
			"Verifique se n�o foi informado algum valor \n"
			"maior que 100 ou menor que 0!\n\n\n"
			);
		}
	}
	
	//A CONTINUAR
	system("Pause");
	return 0;
}
