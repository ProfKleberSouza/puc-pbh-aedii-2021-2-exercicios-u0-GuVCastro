#include <stdio.h>

int main() {

	int vetor[50], n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &vetor[i]); 
	
	int maior_elemento = vetor[0], menor_elemento = vetor[0];  

	if (n > 0) {
		for(int i = 0; i < n; i++) { 
			if (vetor[i] < menor_elemento)  	
				menor_elemento = vetor[i];
			if (vetor[i] > maior_elemento)
				maior_elemento = vetor[i]; 
		}
		printf("MENOR = %d\nMAIOR = %d\n", menor_elemento, maior_elemento);
	} else
		printf("ENTRADA INVALIDA\n"); 

	return(0);
}
