/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N5
   Faça um algoritmo que leia três numeros. Calcule
   e escreva a média aritmética.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	int num1, num2, num3, media;
	
	//entrada de dados
	printf("Numero 1..:"); scanf("%i", &num1);
	printf("Numero 2..:"); scanf("%i", &num2);
	printf("Numero 3..:"); scanf("%i", &num3);
	
	//processamento de dados
	media = (num1 + num2 + num3)/ 3;
	
	printf(" A media dos numeros e..: %i", media);
}
