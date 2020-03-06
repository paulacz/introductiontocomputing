#include <stdio.h>
int main (){
	int cont, altura, soma=0;
	float media, maior, menor;
	for(cont=0; cont<3; cont++){
		printf("altura...:");scanf("%i",&altura);
		soma = soma + altura;
		if(cont==0){ // a primeira leitura é ao mesmo tempo o maior e o menor valor
		   maior = altura;
		   menor = altura;
		}
		else{// da segunda leitura em diante
		   if(altura > maior){
		   	maior = altura;
		   }
		    if(altura < menor){
		    	menor = altura;
			}
		}
	}
	media = soma / cont;
	printf("media das altura....: %f\n", media);
	printf("a maior altura......: %f\n", maior);
	printf("a menor altura......: %f\n", menor);
}
