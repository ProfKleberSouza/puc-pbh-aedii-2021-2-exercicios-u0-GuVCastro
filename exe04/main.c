#include <stdio.h>

void imprime_extremos(int *numeros)
{
	if (numeros[0] > numeros[1] && numeros[0] > numeros[2]) printf("MAIOR = %d\n", numeros[0]);	
	else if (numeros[1] > numeros[2]) printf("MAIOR = %d\n", numeros[1]);	
	else printf("MAIOR = %d\n", numeros[2]);

	if (numeros[0] < numeros[1] && numeros[0] < numeros[2]) printf("MENOR = %d\n", numeros[0]);	
	else if (numeros[1] < numeros[2]) printf("MENOR = %d\n", numeros[1]);	
	else printf("MENOR = %d\n", numeros[2]);
}

int main() {
	int numeros[3];

	printf("Insira 3 número respctivamente: ");
	scanf("%d %d %d", &numeros[0], &numeros[1], &numeros[2]);

	imprime_extremos(numeros);
}
