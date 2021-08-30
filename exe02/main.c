#include <stdio.h>

int main() {
	int rendimento, velocidade, tempo, distancia, consumo;
	
	scanf("%d %d %d", &tempo, &velocidade, &rendimento);
	distancia = velocidade * tempo;
	consumo = distancia / rendimento;
	
	printf("R = %d\n", rendimento);
	printf("V = %d\n", velocidade);
	printf("T = %d\n", tempo);
	printf("D = %d\n", distancia);
	printf("L = %d\n", consumo);

	return 0;
}
