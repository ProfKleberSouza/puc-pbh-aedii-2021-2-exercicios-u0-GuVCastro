#include <stdio.h>

void preenche_dados(int *rendimento, int *velocidade, int *tempo)
{
	printf("Insira respectivamente o rendimento, velocidade média e tempo de viagem: ");
	scanf("%d %d %d", rendimento, velocidade, tempo);
}

void calcula_valores(int rendimento, int velocidade, int tempo, int *distancia, int *consumo)
{
	*distancia = velocidade * tempo;
	*consumo = *distancia / rendimento;
}

void imprime_dados(int rendimento, int velocidade, int tempo, int distancia, int consumo)
{
	printf("R = %d\n", rendimento);
	printf("V = %d\n", velocidade);
	printf("T = %d\n", tempo);
	printf("D = %d\n", distancia);
	printf("L = %d\n", consumo);
}

int main() {
	int rendimento, velocidade, tempo, distancia, consumo;
	
	preenche_dados(&rendimento, &velocidade, &tempo);
	calcula_valores(rendimento, velocidade, tempo, &distancia, &consumo);
	imprime_dados(rendimento, velocidade, tempo, distancia, consumo);

	return 0;
}
