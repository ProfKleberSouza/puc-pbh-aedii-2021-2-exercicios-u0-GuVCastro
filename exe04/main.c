#include <stdio.h>

int main() {
	int numero1, numero2, numero3;

	scanf("%d %d %d", &numero1, &numero2, &numero3);

	if (numero1 > numero2 && numero1 > numero3) printf("MAIOR = %d\n", numero1);	
	else if (numero2 > numero3) printf("MAIOR = %d\n", numero2);	
	else printf("MAIOR = %d\n", numero3);

	if (numero1 < numero2 && numero1 < numero3) printf("MENOR = %d\n", numero1);	
	else if (numero2 < numero3) printf("MENOR = %d\n", numero2);	
	else printf("MENOR = %d\n", numero3);

	return 0;
}
