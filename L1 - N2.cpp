/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N2
   Faça um algoritmo que leia três números. Calcule e escreva a 
   multiplicação dos números.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	int num1, num2, num3, mult;
	
	//entrada de dados
	printf("Numero 1..:"); scanf("%i", &num1);
	printf("Numero 2..:"); scanf("%i", &num2);
	printf("Numero 3..:"); scanf("%i", &num3);
	
	//processamento de dados
	mult = num1 * num2 * num3;
	
	printf(" A multiplicação dos numeros e..: %i", mult
	);
}
