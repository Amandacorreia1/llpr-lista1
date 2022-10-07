#include <stdio.h>
#include <locale.h>

   int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	int n1, n2, resto;
   	float quociente;
   	 
   	printf("Programa para calcular quociente e resto \n\n");
   	
   	printf("primeiro numero: ");
   	scanf("%d" , &n1);
   	
   	printf("segundo numero: ");
   	scanf("%d" , &n2);
   	
   	quociente = (float) n1/n2;
   	
   	resto = n1 % n2;
   	
   	printf(" O valor calculado do quociente entre os números %d, %d, foi: %.2f \n\n", n1, n2, quociente);
   	printf("O valor calculado do resto entre os numeros %d, %d, foi: %d", n1, n2, resto);
   	
   	return 0;
   }
