/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N1
   Faca um algoritmo que leia dois numeros. Calcule e escreva a soma dos numeros
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	int num1, num2, soma;
	
	//entrada de dados
	printf("Numero 1..:"); scanf("%i", &num1);
	printf("Numero 2..:"); scanf("%i", &num2);
	
	//processamento de dados
	soma = num1 +num2;
	
	printf("A soma dos numeros e..: %i", soma);
}
