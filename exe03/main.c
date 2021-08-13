#include <stdio.h>

void checa_numero(int numero)
{
	if (numero >= 0)
		numero % 2 == 0 ? printf("NÚMERO PAR POSITIVO\n") : printf("NÚMERO ÍMPAR POSITIVO\n");
	else
		numero % 2 == 0 ? printf("NÚMERO PAR NEGATIVO\n") : printf("NÚMERO ÍMPAR NEGATIVO\n");
}	

int main()
{
   int numero;

   printf("Informe um número: ");
   scanf("%d", &numero);

   checa_numero(numero);

   return 0;
}
