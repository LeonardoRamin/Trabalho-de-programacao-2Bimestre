#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void nadador(int idade){
	if(idade>=5&&idade<=7){
		printf("Categoria: Infantil A.");
	}
	else if(idade>=8&&idade<=10){
		printf("Categoria: Infantil B.");
	}
	else if(idade>=11&&idade<=13){
		printf("Categoria: Juvenil A.");
	}
	else if(idade>=14&&idade<=17){
		printf("Categoria: Juvenil B.");
	}
	else if(idade>=18){
		printf("Categoria: Adulto.");
	}
	else{
		printf("Idade fora da faixa etaria.");
	}
	getch();
}
int main(int argc, char *argv[]) {
	int idade=0;
	printf("Digite uma idade: ");
	scanf("%i",&idade);
	nadador(idade);
	return 0;
}
