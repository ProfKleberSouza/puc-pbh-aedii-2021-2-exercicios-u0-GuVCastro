#include <stdio.h>

int main()
{
	float nota1 = 0, nota2 = 0, nota3 = 0 , nota4 = 0, i;
	float media_notas = 0;

	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4); 
	media_notas = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("NOTA = %0.1f (APROVADO)\n", media_notas);

	return 0;
}
