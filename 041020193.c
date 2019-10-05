#include <stdio.h>
int main (){
	int cont, numero, soma=0;
	float media, maior, menor;
	for(cont=0; cont<3; cont++){
		printf("numero...:");scanf("%i",&numero);
		soma = soma + numero;
		if(cont==0){ // a primeira leitura é ao mesmo tempo o maior e o menor valor
		   maior = numero;
		   menor = numero;
		}
		else{// da segunda leitura em diante
		   if(numero > maior){
		   	maior = numero;
		   }
		    if(numero < menor){
		    	menor = numero;
			}
		}
	}
	media = soma / cont;
	printf("media dos numeros...: %f\n", media);
	printf("o maior numero......: %f\n", maior);
	printf("o menor numero......: %f\n", menor);
}
