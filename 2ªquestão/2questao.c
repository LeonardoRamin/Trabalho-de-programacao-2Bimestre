#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetx[5], vety[8], vetz[8];
	int x=0, y=0, z=0;
	for(x=0;x<8;x++){
		vetz[x]= -1;
	}
	srand((unsigned)time(NULL));
	for(x=0;x<5;x++){
		vetx[x]=(rand()%101);
	}
	for(x=0;x<8;x++){
		vety[x]=(rand()%101);
	}
	for(x=0;x<5;x++){
		for(y=0;y<8;y++){
			if(vetx[x]==vety[y]){
				vetz[z]=vety[y];
				z++;
			}
		}
	}
	printf("numeros do vetor x\n");
	for(x=0;x<5;x++){
		printf("%i ",vetx[x]);
	}
	printf("\nnumeros do vetor y\n");
	for(x=0;x<8;x++){
		printf("%i ",vety[x]);
	}
	printf("\nnumeros em comum\n");
	if(z==0){
		printf("Nao ha numeros em comum!");
		getch();
	}
	else{
		for(x=0;x<8;x++){
			if(vetz[x]!= -1){
				printf("%i ",vetz[x]);
			}
		}
	}
	return 0;
}
