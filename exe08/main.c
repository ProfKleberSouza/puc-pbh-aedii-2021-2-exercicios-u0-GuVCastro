#include <stdio.h>
#define MAX 100

int main() {
	int valor_lido = 0, valor_tipo[MAX], i = 0;
	
	do {  
		scanf("%d", &valor_lido);
		if (valor_lido > 0)
			valor_tipo[i] = 1;
		else if (valor_lido < 0) 
			valor_tipo[i] = 0; 
		i++;
	} while (valor_lido != 0);
	
	if (i > 1) 
		for (int j = 0; j < i - 1; j++) {  
			if (valor_tipo[j] == 1)
				printf("POSITIVO\n");
			else 
				printf("NEGATIVO\n");
		}

	return(0);
}
