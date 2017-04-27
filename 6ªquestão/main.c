#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int palavra(char x, char y[], int posicao[]){
	int i=0;
	for(i=0;i<50;i++){
		if(x==y[i]){
			posicao[i]=i;
		}
	}
	return i;
}
int main(int argc, char *argv[]) {
	char frase[50], aux;
	int i=0, posicao[50];
	for(i=0;i<50;i++){
		posicao[i]= -1;
	}
	printf("Digite uma frase: ");
	gets(frase);
	printf("\n%s",frase);
	getch();
	printf("\nDigite o caracter que procura: ");
	scanf("%c",&aux);
	palavra(aux,frase,posicao);
	system("cls");
	printf("Este caracter esta na(s) posicao(oes) ");
	for(i=0;i<50;i++){
		if(posicao[i]!= -1){
			printf("%i ",posicao[i]);
		}
	}
	getch();
	return 0;
}
