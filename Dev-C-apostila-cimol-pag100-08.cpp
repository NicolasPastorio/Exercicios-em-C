#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-08
//exibir ra�z quadrada do valor informado
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int num, a, raiz;
	
	printf("Favor informar um valor inteiro: ");
	scanf("%d", &num);
	//ra�z quadrada s� aceita n�meros maiores que zero
	/*s� possuem ra�z quadrada valores que s�o quadrado perfeito
	 e um valor sera quadrado perfeito se ele for um n�mero inteiro
	 e seu quadrado gerar uotro n�mero inteiro*/
	if (num > 0){
		for(int a = 0; ; a++){
			if(a > num){
				printf("O valor informado n�o possue uma ra�z exata!\n");				
				break;
			}
			if (a * a == num){//caso a < num
				raiz = a;
				printf("A ra�z quadrada de %d � %d\n", num, raiz);
				break;	
			}	
		}
	} else {
		printf("N�o ser� poss�vel fazer o c�lculo pois,\n"
			   "nennhum produto de fatores dar� como resultado\n"
			   "um n�mero negativo!\n"); 
	}
	
	system("Pause");
	return 0;
}
