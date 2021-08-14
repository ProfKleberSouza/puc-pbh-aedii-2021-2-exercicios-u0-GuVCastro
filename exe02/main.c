#include <stdio.h>

int main() {
	int rendimento, velocidade, tempo, distancia, consumo;
	
	printf("Insira respectivamente o rendimento, velocidade média e tempo de viagem: ");
	scanf("%d %d %d", &rendimento, &velocidade, &tempo);
	
	distancia = velocidade * tempo;
	consumo = distancia / rendimento;
	
	printf("R = %d\n", rendimento);
	printf("V = %d\n", velocidade);
	printf("T = %d\n", tempo);
	printf("D = %d\n", distancia);
	printf("L = %d\n", consumo);

	return 0;
}
