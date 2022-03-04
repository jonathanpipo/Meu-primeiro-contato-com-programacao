#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int tabuada = 0;
    printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>> ");
    scanf("%i", &tabuada);
    printf("\n");

    for (int x = 1; x <= 10; ++x)
    {

        printf("%ix%i = %i\n", x, tabuada, x * tabuada);
    }

    getche();
}
