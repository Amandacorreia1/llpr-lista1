#include <stdio.h>
#include <locale.h>

int main() {
   	
   	setlocale(LC_ALL, "Portuguese_Brazil");
   	
   	int n1, n2, n3, adicao, subtracao;
   	
   	 
   	printf("Programa para calcular soma e subtracao \n\n");
   	
   	printf("primeiro numero: ");
   	scanf("%d" , &n1);
   	
   	printf("segundo numero: ");
   	scanf("%d" , &n2);
   	
    adicao = n1 + n2;
   	
   	printf("terceiro numero: ");
   	scanf("%d" , &n3);
   	
   	subtracao = adicao - n3;
   	
   
   	printf(" O valor calculado da entre os números %d e %d foi: %d\n\n",n1, n2, adicao);
   	
   	printf(" O valor calculado da adicacao e subtracao entres os numeros %d e %d foi: %d", adicao, n3, subtracao);
  
   	return 0;
}
