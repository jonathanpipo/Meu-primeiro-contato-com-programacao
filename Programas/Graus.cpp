#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{

	float c, f;

	setlocale(LC_ALL, "Portuguese");

	printf("\nInforme a temperatura em Fahrenheit \n\t\t\t\n>>> ");

	scanf("%f", &f);

	c = (f - 32) * 5 / 9;

	printf("\nTemp. Fahrenheit: %.f°\n", f);
	printf("\nTemp. Celsius: %0.2f°\n", c);

	getche();
}
