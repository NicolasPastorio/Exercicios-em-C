#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Dev-C-apostila-cimol-pag77-01
int main(){
	system("Color 02");
	setlocale(LC_ALL,"Portuguese");
	
	int a, b, c;
	
	printf("-------------\n");
	printf("Tri�ngulo\n");
	printf("-------------\n");
	printf("Favor, informe os tr�s lados do trianglo\n");
	
	printf("-------------\n");
	printf("Primeiro lado: ");
	scanf("%d", &a);
	printf("Segundo lado: ");
	scanf("%d", &b);
	printf("Terceiro lado: ");
	scanf("%d", &c);
	printf("-------------\n");
	
	if(a != 0 && b != 0 && c != 0){//condic�o 1 do tri�ngulo
		if(a+b >= c && a+c >= b && b+c >= a){//condic�o 2 do tri�ngulo
			if(a == b && a == c && b == c){
				printf("O tri�ngulo a = %d, b = %d, c = %d � equil�tero,\n", a, b, c);
				printf("Pois possue os tr�s lados iguais!");
			}
			if(a==b || a==c || b==c){
				printf("O tri�ngulo a = %d, b = %d, c = %d � is�sceles,\n", a, b, c);
				printf("Pois possue os dois lados iguais!");
			}
			if(a!=b && a!=c && b!=c){
				printf("O tri�ngulo a = %d, b = %d, c = %d � escaleno,\n", a, b, c);
				printf("Pois nenhum dos seus lados s�o iguais!");
			}
		}else//n�o satisfaz as condi��es para ser um tri�ngulo
		printf("Com os valores dados n�o se pode formar um tri�ngulo!\n");
	}else//n�o satisfaz as condi��es para ser um tri�ngulo
		printf("Com os valores dados n�o se pode formar um tri�ngulo!\n");
		
		
		
	system("PAUSE");
	return 0;
}
