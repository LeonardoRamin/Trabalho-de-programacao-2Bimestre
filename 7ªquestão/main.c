#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct cadastro{
		char nome[50];
		int idade;
		char sexo;
		float peso, altura;
	}P[10];
	int i=0, menu, quantidade=10, cadastro=0;
	for(i=0;i<quantidade;i++){
		P[i].nome[0]='0';
	}
	do{
		system("cls");
		printf("0-Cadastrar 1-alterar 2-excluir 3-listar 4-sair\n");
		scanf("%i",&menu);
		system("cls");
		fflush(stdin);
		if(menu==0){
			for(i=0;i<quantidade;i++){
				if(P[i].nome[0]=='0'){
					printf("Digite o nome: ");
					gets(P[i].nome);
					printf("Digite a idade: ");
					scanf("%i",&P[i].idade);
					fflush(stdin);
					printf("Digite o sexo: ");
					scanf("%c",&P[i].sexo);
					printf("Digite o peso: ");
					scanf("%f",&P[i].peso);
					printf("Digite a altura: ");
					scanf("%f",&P[i].altura);
					fflush(stdin);
					system("cls");
					cadastro++;
					break;
				}
			}
		}
		else if(menu==1){
			if(cadastro!=0){
				for(i=0;i<quantidade;i++){
				if(P[i].nome[0]!='0'){
					printf("%i=%s\n",i,P[i].nome);
					}
				}
				printf("Qual ficha deseja alterar? ");
				scanf("%i",&i);
				do{
					fflush(stdin);
					system("cls");
					printf("Alterar:\n0-nome\n1-idade\n2-sexo\n3-peso\n4-altura\n5-voltar");
					scanf("%i",&menu);
					fflush(stdin);
					system("cls");
					if(menu==0){
						printf("Digite o nome: ");
						gets(P[i].nome);
					}
					else if(menu==1){
						printf("Digite a idade: ");
						scanf("%i",&P[i].idade);
					}
					else if(menu==2){
						fflush(stdin);
						printf("Digite o sexo: ");
						scanf("%c",&P[i].sexo);
					}
					else if(menu==3){
						printf("Digite o peso: ");
						scanf("%f",&P[i].peso);
					}
					else if(menu==4){
						printf("Digite a altura: ");
						scanf("%f",&P[i].altura);
					}
					else{
						if(menu!=5){
							printf("Menu invalido");
							getch();
						}
					}
				}while(menu!=5);
			}
			else{
				printf("Nao ha nada para alterar.");
				getch();
			}
		}
		else if(menu==2){
			if(cadastro!=0){
				for(i=0;i<quantidade;i++){
				if(P[i].nome[0]!='0'){
					printf("%i=%s\n",i,P[i].nome);
					}
				}
				printf("Qual ficha deseja deletar? ");
				scanf("%i",&i);
				P[i].nome[0]='0';
				cadastro--;
				printf("Ficha excluida com exito");
				getch();
				system("cls");
			}
			else{
				printf("Nao existem fichas para excluir.");
				getch();
			}
		}
		else if(menu==3){
			if(cadastro!=0){
				for(i=0;i<quantidade;i++){
				if(P[i].nome[0]!='0'){
					printf("%i=%s\n",i,P[i].nome);
					}
				}
				printf("Qual ficha deseja acessar? ");
				scanf("%i",&i);
				system("cls");
				fflush(stdin);
				printf("Nome: %s\nIdade: %i anos\tSexo: %c\nPeso: %.2f kg\tAltura: %.2f m",P[i].nome,P[i].idade,P[i].sexo,P[i].peso,P[i].altura);
				getch();
				system("cls");
			}
			else{
				printf("Nao existem fichas");
				getch();
			}
		}
		else{
			if(menu!=4){
				printf("Menu invalido");
				getch();
				system("cls");
			}
		}
	}while(menu!=4);
	
	return 0;
}
