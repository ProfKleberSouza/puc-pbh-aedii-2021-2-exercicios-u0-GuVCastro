#include <stdio.h>

int main()
{
	float lado1 = 0, lado2 = 0, lado3 = 0;

	scanf("%f %f %f", &lado1, &lado2, &lado3); 
	if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
		if (lado1 == lado2 && lado2 == lado3)
			printf("TRIANGULO EQUILATERO\n"); 
		else if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
			printf("TRIANGULO ISOSCELES\n");
		else if (lado1 != lado2 && lado2 != lado3 && lado1 != lado3)
			printf("TRIANGULO ESCALENO\n"); 
	} else
		printf("ENTRADA INVALIDA\n"); 

	return 0;
}
