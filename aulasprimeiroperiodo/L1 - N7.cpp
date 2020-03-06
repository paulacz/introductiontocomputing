/* IPOG - Engenharia Civil
   Paula Cruz - 08/2019
   Estrutura Sequencial - N7
   João faz economias em dólar e deseja saber quanto vale em reais, faça 
   um algorítmo que leia a quantidade de dólares que ele possui a cotação 
   do dólar emreal, calcule e escreva o valor convertido.
*/

#include <stdio.h>

int main() {
	
	//declaração de variáveis
	float real, economias, cotacaodolar;
	
	//entrada de dados
	printf("cotação dolar de venda..:"); scanf("%f", &cotacaodolar);
	printf("qual o valor em USD de economias?"); scanf("%f", &economias);
	
	//processamento de dados
	real =  cotacaodolar * economias;
	
	printf(" Joao tem  %2.f reais", real);
}
