#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int numeros(int *num){
	if(*num>0){
		*num=1;
	}
	else if(*num<0){
		*num= -1;
	}
	else if(*num==0){
		*num=0;
	}
	return 0;
}
int main(int argc, char *argv[]){
	int num=0;
	printf("Digite um numero");
	scanf("%i",&num);
	numeros(&num);
	if(num==1){
		printf("\nEh positivo");
		getch();
	}
	else if(num== -1){
		printf("\nEh negativo");
		getch();
	}
	else if(num==0){
		printf("0 eh nulo");
		getch();
	}
	return 0;
}
