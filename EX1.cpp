 
 /* IPOG - Engenharia Civil
   Paula Cruz - 02/2020
   Ex.1 */

#include <stdio.h>

int main(){
	float nota, media;
	
	printf("Nota 1...:"); scanf("%f",&nota);
	media = nota;
	printf("Nota 2...:"); scanf("%f",&nota);
	media = media + nota;
	printf("Nota 3...:"); scanf("&f",&nota);
	media = media + nota;
	media = media / 3;
	
	printf("A media e...: %.1f", media);
}
