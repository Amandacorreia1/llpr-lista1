#include <stdio.h>
#include <locale.h>

   int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	 float av1, av2, av3, media;
   	 
   	printf("Programa para calcular media final\n\n");
   	
   	printf("primeira nota: ");
   	scanf("%f" , &av1);
   	
   	printf("segunda nota: ");
   	scanf("%f" , &av2);
   	
   	
   	printf("Terceira nota: ");
   	scanf("%f" , &av3);
   	
   	media = (av1 + av2 + av3)/3;
   	
   	printf(" O valor calculado da media entre os números %f, %f e %f foi: %f", av1, av2, av3, media);
   	
   	return 0;
   }
   

