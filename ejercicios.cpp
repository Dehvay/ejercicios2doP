#include <stdio.h>
#include <string.h>

int main()
{
    char frase[30];
    int cont;
    int let = 0;

    printf("Introduzca una frase: ");
    gets_s(frase, 30);

    for (cont = 0; frase[cont]; cont++)
    {
        if (frase[cont] == ' ')
        {
        }
        else
        {
            let++;
        }
    }

    printf("la frase tiene %i letras\n", let);

    return 0;
}
