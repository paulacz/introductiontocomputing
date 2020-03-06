/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N8
   Uma pessoa construindo sua residência resolveu colocar em sua casa uma caixa para 
   servir como reservatório de água. Considerando que a caixa seja retangular, 
   faça um algoritmo que leia as dimensões da caixa (comprimento, altura e largura), 
   calcule e escreva o volume de água que pode ser armazenado.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	float comprimento, altura, largura, volume;
	
	//entrada de dados
	printf("comprimento..:"); scanf("%f", &comprimento);
	printf("altura.......:"); scanf("%f", &altura);
	printf("largura......:"); scanf("%f", &largura);
	
	//processamento de dados
	volume =  comprimento * altura * largura;
	
	printf(" o volume do reservatorio sera...%f", volume);
}
