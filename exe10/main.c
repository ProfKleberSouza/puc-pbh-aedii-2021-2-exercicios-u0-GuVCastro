#include <stdio.h>

int main() {
	int vetor_valores[10], i;
	
	for (i = 0; i < 10; i++)
		scanf("%d", &vetor_valores[i]); 
	for (i = 9; i >= 0; i--)
		printf("%d\n", vetor_valores[i]); 

	return(0);
}
