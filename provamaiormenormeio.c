/* 
IPOG - Engenharia Civil
Paula Cruz - 10/2019
Estrutura Condicional
Faça um programa que leia 3 números,  
e mostre qual é o maior, o menor e do meio. */

#include <stdio.h>

int main(){
	//declaração de variaveis
	
	float numero1, numero2, numero3, maior, menor, meio;
	
	//entrada de dados
	
	printf("digite o numero1\n"); scanf ("%f", &numero1);
	printf("digite o numero2\n"); scanf ("%f", &numero2);
	printf("digite o numero3\n"); scanf ("%f", &numero3);
	
	// processamento de dados
	
	if(numero1 > numero2 && numero1 > numero3){
		printf("o numero 1 e o maior..: %f \n", numero1);
		maior = numero1;
	}
	if(numero2 > numero1 && numero2 > numero3){
		printf("o numero 2 e o maior..: %f \n", numero2);
		maior = numero2;
	}
	if(numero3 > numero2 && numero3 > numero2){
		printf("o numero 3 e o maior..: %f \n", numero3);
		maior = numero3;
	}
	if(numero1 < numero2 && numero1 < numero3){
		printf("o menor numero........: %f \n", numero1);
		menor = numero1;
	}
	if(numero2 < numero1 && numero2 < numero3){
		printf("o menor numero........: %f \n", numero2);
		menor = numero2;
	}
	if(numero3 < numero1 && numero3 < numero2){
		printf("o menor numero........: %f \n", numero3);
		menor = numero3;
	}
	if(numero1!= maior && numero1 != menor){
		printf("o numero do meio......: %f \n", numero1);
	}
	if(numero2!= maior && numero2 != menor){
		printf("o numero do meio......: %f \n", numero2);
	}
	if(numero3 != maior && numero3 != menor){
		printf("o numero do meio......: %f \n", numero3);
	}
}
