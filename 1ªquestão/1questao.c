#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct aluno{
		char nome[50];
		int nota[2];
		int media;
	}A[2];
	int quantidade=2, i=0, y=0;
	int acima7=0, entre=0, menor3=0, nenhum=0, menu=0;
	do{
		printf("Digite o nome do %i aluno: ",i+1);
		gets(A[i].nome);
		for(y=0;y<2;y++){
			printf("Digite a nota do %i Bimestre: ",y+1);
			scanf("%i",&A[i].nota[y]);
		}
		A[i].media=(A[i].nota[0]+A[i].nota[1])/2;
		if(A[i].media>70){
			acima7++;
		}
		else if(A[i].media>=40&&A[i].media<=70){
			entre++;
		}
		else if(A[i].media<30){
			menor3++;
		}
		else{
			nenhum++;
		}
		i++;
		fflush(stdin);
		system("cls");
	}while(i!=quantidade);
	do{
		getch();
		system("cls");
		printf("Pesquisar por:\n0-Alunos que tiraram media acima de 70;\n1-Alunos que tiraram media entre 40 e 70;\n2-Alunos com media inferior a 30;\n3-Resultados;\n4-Sair\n");
		scanf("%i",&menu);
		system("cls");
		if(menu==0){
			if(acima7!=0){
				printf("%i foram com a media acima de 70;\n",acima7);
				for(i=0;i<quantidade;i++){
					if(A[i].media>70){
						printf("%s\n",A[i].nome);
					}
				}
			}
			else{
				printf("Nao ha nenhum aluno com esta media.");
			}
		}
		else if(menu==1){
			if(entre!=0){
				printf("%i foram com a media entre 40 e 70;\n",entre);
				for(i=0;i<quantidade;i++){
					if(A[i].media>=40&&A[i].media<=70){
						printf("%s\n",A[i].nome);
					}
				}
			}
			else{
				printf("Nao ha nenhum aluno com esta media.");
			}
		}
		else if(menu==2){
			if(menor3!=0){
				printf("%i foram com a media inferior a 30;\n",menor3);
				for(i=0;i<quantidade;i++){
					if(A[i].media<30){
						printf("%s\n",A[i].nome);
					}
				}
			}
			else{
				printf("Nao ha nenhum aluno com esta media.");
			}
		}
		else if(menu==3){
			printf("Sao %i alunos cadastrados.\n%i foram com a media acima de 70;\n%i foram com a media entre 40 e 70;\n%i foram com as notas inferiores a 30 e\n%i nao fazem parte dessas condicoes",quantidade,acima7,entre,menor3,nenhum);
			getch();
		}
		else{
			if(menu!=4){
				printf("Menu invalido.");
			}
		}
	}while(menu!=4);
	return 0;
}
