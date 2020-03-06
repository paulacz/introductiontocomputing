/* IPOG - Engenharia Civil
   Paula Cruz - 02/2020
   EX2
*/
#include <stdio.h>

int main () {
	
	float nota1, nota3, media;
	int qtde = 0;
	
	printf("Nota 1..:"); scanf("%f",&nota1);
	printf("Nota 2..:"); scanf("%f",&nota2);
	printf("Nota 3..:"); scanf("%f",&nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if(nota1 >= media){
		qtde++;
	}
	if(nota2 >= media){
		qtde++;
	}
	if(nota3 >= media){
		qtde++;
	}
	printf("a media e..: %.1f\n", media);
	printf("quantidade de notas acima da media..: %1", qtde);
}
