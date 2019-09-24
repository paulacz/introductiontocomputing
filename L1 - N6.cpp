/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N6
   Faça um algoritmo que leia as medidas de um  retângulo (comprimento 
   e largura). Calcule e escreva sua área.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	int comprimento, largura, area;
	
	//entrada de dados
	printf("comprimento..:"); scanf("%i", &comprimento);
	printf("largura......:"); scanf("%i", &largura);
	
	//processamento de dados
	area = comprimento * largura / 2;
	
	printf(" a area do triangulo retangulo e..: %i", area);
}
