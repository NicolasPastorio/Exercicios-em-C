#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag100-14
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	/*requizitar um valor au usu�rio e
	informar se � primo ou n�o*/
	
	int n, primo = 0;
	
	printf("Fovor, informar um n�mero inteiro n�o negativo: ");
	scanf("%d", &n);
	
	if (n > 1){
		for (int a = 2; a <= n; a++){
				if(n % a == 0)
					primo = primo + 1;
		}
	}
	if(primo == 1 || n == 2)
		printf("O valor %d � primo! \n", n);
	else 
		printf("O valor %d n�o � primo! \n", n);
		
	system("Pause");
	return 0;
}
