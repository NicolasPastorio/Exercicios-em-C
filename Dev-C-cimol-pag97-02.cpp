#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-cimol-pag97-02
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*Um n�mero primo � um n�mer que � apenaz diviz�vel por
      um e por ele mesmo!
	  O numero 2 � o �nico numero primo que � par*/
	
	int num, primo = 0;
	
	printf("Favor informar um n�mero inteiro maior que zero qualquer: ");
	scanf("%d", &num);
	
	
		if(num == 2 || num % 2 != 0 && num > 2 \\ num != 9)
			printf("O n�mero %d � primo!\n", num);
		else
			printf("O n�mero %d n�o � primo!\n", num);
			

	system("Pause");
	return 0;
}





