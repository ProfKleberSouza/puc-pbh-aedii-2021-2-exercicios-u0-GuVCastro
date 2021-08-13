#include <stdio.h>

void checa_numero(int numero)
{
	if (numero >= 0)
		if (numero%2 == 0) printf("NÚMERO PAR POSITIVO\n");
		else printf("NÚMERO ÍMPAR POSITIVO\n");
	else
		if (numero%2 == 0) printf("NÚMERO PAR NEGATIVO\n");
		else printf("NÚMERO ÍMPAR NEGATIVO\n");
}	

int main() {
   int numero;

   printf("Informe um número: ");
   scanf("%d", &numero);

   checa_numero(numero);

   return 0;
}
