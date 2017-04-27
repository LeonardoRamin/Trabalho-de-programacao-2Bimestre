#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mat[6][3];
	int l=0, c=0, vez=0, num=0;
	printf("Digite um numero: ");
	scanf("%i",&num);
	for(l=0;l<6;l++){
		for(c=0;c<3;c++){
			printf("Digite um numero: ");
			scanf("%i",&mat[l][c]);
			if(num>mat[l][c]){
				num=mat[l][c];
			}	
		}
	}
	system("cls");
	printf("O menor numero eh %i",num);
	getch();
	return 0;
}
