#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int primos(int vet[]){
	int x=0, y=0, z=0, i=1; 
	for(x=2;x<100;x++){
		vet[0]=2;
		for(y=2; y<x; y++){ 
			z=x%y;
 			if(z==0) 
			break; 
		} 
		if(z!=0){
			vet[i]=x;
			i++;
		}   
	}
	return 0;
}
int main(int argc, char *argv[]) {
	int i=0, vet[100];
	for(i=0;i<100;i++){
		vet[i]=0;	
	}
	primos(vet);
	printf("Os seguintes numeros sao primos:\n");
	for(i=0;i<100;i++){
		if(vet[i]!=0){
			printf("%i\t",vet[i]);
		}
	}
	getch();
	return 0;
}
