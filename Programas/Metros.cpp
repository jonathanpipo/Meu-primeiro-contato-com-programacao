#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(void)

{

    float metros, decimetros, centimetros, milimetros;

    setlocale(LC_ALL, "Portuguese");

    printf("\nInforme o valor em metros \n\t\t\t\n>>> ");

    scanf("%f", &metros);

    decimetros = metros * 10;

    centimetros = metros * 100;

    milimetros = metros * 1000;

    printf("\nO valor em dec�metros �: %0.f \n", decimetros);

    printf("O valor em cent�metros �: %0.f \n", centimetros);

    printf("O valor em mil�metros �: %0.f \n", milimetros);

     getche();

}
