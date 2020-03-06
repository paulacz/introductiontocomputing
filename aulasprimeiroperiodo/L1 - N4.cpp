/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N4
   Faça um algoritmo que leia a idade de uma pessoa em anos. 
   Calcule e escrevas quantos dias ele viveu. Considerar o  ano 
   com 365,25 dias.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	int idade;
	float dias_vividos;
	
	//entrada de dados
	printf("digite sua idade..:"); scanf("%i", &idade);
	
	//processamento de dados
	dias_vividos = idade * 365.25;
	
	printf("voce ja viveu %.2f dias!!!", dias_vividos);
}
