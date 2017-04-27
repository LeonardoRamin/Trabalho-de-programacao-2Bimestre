#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void zerar(int mat[][3]){
	int l,c;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			mat[l][c]=1;
		}
	}
}
int main(int argc, char *argv[]) {
	int l,c;
	int mat[3][3];
	zerar(mat);
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%i\n",mat[l][c]);
		}
	}
	return 0;
}
