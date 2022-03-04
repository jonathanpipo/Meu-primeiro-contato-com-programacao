#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <cmath>

float soma(float a, float b)
{

	return a + b;
}

float quad(float a)
{

	return a * a;
}

float prod(float a, float b)
{

	return a * quad(b);
}

float raiz(float a, float b)
{

	return sqrt((float)soma(quad(a), quad(b)));
}

float modulo(float a)
{

	return (a < 0) ? -a : a;
}

float seno(float a, float b)
{
	
	return sin(a-b);
}

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float x, y;

	printf("\nInforme os dois números desejados \n\t\t\t\n>>> ");

	scanf("%f", &x);

	printf("\t\t\t\n>>> ");

	scanf("%f", &y);

	printf("\nSoma dos números: %0.2f\n", soma(x, y));

	printf("Produto do primeiro número pelo quadrado do segundo: %0.2f\n", prod(x, y));

	printf("Quadrado do primeiro número:: %0.2f\n", quad(x));

	printf("Raiz quadrada da soma dos quadrados: %0.2f\n", raiz(x, y));
	
	printf("O seno da diferença do primeiro número pelo segundo: %0.2f\n", seno(x, y));

	printf("Módulo do primeiro número: %0.2f\n", modulo(x));

	getche();
}
