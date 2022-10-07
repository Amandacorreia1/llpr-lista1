#include <stdio.h>
#include <locale.h>

   int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	 float av1, av2, media;
   	 
   	printf("Programa para calcular media final\n\n");
   	
   	printf("primeira nota: ");
   	scanf("%f" , &av1);
   	
   	printf("segunda nota: ");
   	scanf("%f" , &av2);
   	

   	media = (av1 + av2)/2;
   	
   	printf(" O valor calculado da media entre os números %f e %f foi: %f", av1, av2, media);
   	
   	return 0;
   }
   
