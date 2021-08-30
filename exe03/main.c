#include <stdio.h>

int main()
{
	int numero;

	scanf("%d", &numero);

	if (numero >= 0)
		numero % 2 == 0 ? printf("NUMERO PAR POSITIVO\n") : printf("NUMERO IMPAR POSITIVO\n");
	else
		numero % 2 == 0 ? printf("NUMERO PAR NEGATIVO\n") : printf("NUMERO IMPAR NEGATIVO\n");

	return 0;
}
