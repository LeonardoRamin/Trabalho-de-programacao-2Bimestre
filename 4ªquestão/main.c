#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char frase[50];
	int l=0, espacos=0, i=0;
	printf("Digite uma frase:");
	gets(frase);
	for(l=0;l<50;l++){
		if(frase[l]==' '){
			espacos++;
		}
	}
	i= strlen(frase);
	for(l=0;l<i;l++){
		if(frase[l]!=' '){
			printf("%c",frase[l]);
		}
	}
	printf("\nQuantidade de espacos em branco: %i",espacos);
	getch();
	return 0;
}
