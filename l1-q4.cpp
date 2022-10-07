#include <stdio.h>
#include <locale.h>

   int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	 float n1, n2, n3,n4, produto;
   	 
   	printf("Programa para calcular produto\n\n");
   	
   	printf("primeira nota: ");
   	scanf("%f" , &n1);
   	
   	printf("segunda nota: ");
   	scanf("%f" , &n2);
   	
   	
   	printf("Terceira nota: ");
   	scanf("%f" , &n3);
   	
   	printf("Terceira nota: ");
   	scanf("%f" , &n4);
   	
   	produto = n1 * n2 * n3 * n4;
   	
   	printf(" O valor calculado do produto entre os números %f, %f, %f e %f foi: %f", n1, n2, n3, n4, produto);
   	
   	return 0;
   }
   
