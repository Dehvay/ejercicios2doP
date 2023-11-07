#include <stdio.h>
#include <string.h>

int main()
{
    char frase[30];
    int cont;
    int let = 0;

    printf("Introduce una frase: ");
    scanf_s("%s", frase, 30);

    for (cont = 0; frase[cont]; cont++)
    {
        let++;
    }

    printf("Su frase tiene %i letras\n", let);

    let = strlen(frase);

    printf("Su frase tiene %i letras", let);

    return 0;
}
