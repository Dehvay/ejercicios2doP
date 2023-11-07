#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char frase[30];
    int cont;
    int let = 0;

    printf("Introduzca una frase: ");
    gets_s(frase, 30);

    for (cont = 0; cont < frase[cont]; cont++)
    {
        if (frase[cont] == frase[0])
        {
            frase[cont] = toupper(frase[cont]);
        }
        else
        {
            frase[cont] = tolower(frase[cont]);
        }
    }

    if (frase[cont] == '.')
    {
    }
    else
    {
        frase[cont] = '.';
    }

    printf("%s\n", frase);

    return 0;
}
