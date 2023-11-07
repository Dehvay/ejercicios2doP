#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char Palab[30];
    char AstP[30];
    int cont, cont2;
    int vic = 5;

    char letA[5];

    printf("Introduzca la palabra a adivinar: ");
    scanf_s("%s", Palab, 29);

    for (cont = 0; cont < Palab[cont]; cont++)
    {
        AstP[cont] = '*';
    }
    printf("%s", AstP);

    for (cont = 5; cont > 0; cont--)
    {
        printf("\nIntentos restantes %i\n", cont);
        printf("Introduce una letra o palabra: ");
        scanf_s("%s", letA, 29);

        for (cont2 = 0; cont2 < Palab[cont2]; cont2++)
        {
            if (Palab[cont2] == letA[0])
            {
                AstP[cont2] = letA[0];
            }
        }

        if (strcmp(letA, Palab) == 0)
        {
            strcpy_s(AstP, 29, letA);
            vic = 10;
            cont = 1;
        }

        printf("%s", AstP);
    }

    if (vic == 10)
    {
        printf("\nFelicidades has adivinado la palabra\n");
    }
    else
    {
        printf("\nLastima, eres culpable de la muerte del ahorcado");
    }

    return 0;
}
