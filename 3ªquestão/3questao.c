#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mata[5][5], matb[8][8], matc[8][8];
	int lx=0, cx=0, ly=0, cy=0, lz=0, cz=0, nenhum=0;
	for(lx=0;lx<8;lx++){
		for(cx=0;cx<8;cx++){
			matc[lx][cx]= -1;
		}
	}
	srand((unsigned)time(NULL));
	for(lx=0;lx<5;lx++){
		for(cx=0;cx<5;cx++){
			mata[lx][cx]= rand()%101;
		}
	}
	for(lx=0;lx<8;lx++){
		for(cx=0;cx<8;cx++){
			matb[lx][cx]= rand()%101;
		}
	}
	for(lx=0;lx<5;lx++){
		for(cx=0;cx<5;cx++){
			for(ly=0;ly<8;ly++){
				for(cy=0;cy<8;cy++){
					if(cz==8){
						lz++;
						cz=0;
					}
					if((mata[lx][cx]==matb[ly][cy])&&(mata[lx][cx]!=matc[lz][cz-1])){
						matc[lz][cz]=matb[ly][cy];
						cz++;
						nenhum++;
					}
				}
			}
		}
	}
	printf("numeros da matriz a\n");
	for(lx=0;lx<5;lx++){
		for(cx=0;cx<5;cx++){
			printf("%i ",mata[lx][cx]);
		}
	}
	printf("\nnumeros da matriz b\n");
	for(lx=0;lx<8;lx++){
		for(cx=0;cx<8;cx++){
			printf("%i ",matb[lx][cx]);
		}
	}
	printf("\nnumeros em comum\n");
	if(nenhum==0){
		printf("Nao ha numeros em comum!");
		getch();
	}
	else{
		for(lx=0;lx<8;lx++){
			for(cx=0;cx<8;cx++){
				if(matc[lx][cx]!=-1){
					printf("%i ", matc[lx][cx]);
				}
			}
		}
	}
	return 0;
}
