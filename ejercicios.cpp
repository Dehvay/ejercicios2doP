#include <stdio.h>

int main()
{
    int numE;
    int i;

    printf("Indique un numero entero: ");
    scanf_s("%i", &numE);

    for (i = numE; i > 0; i--)
    {
        printf("%i,", i);
    }

    printf("%i", i);

    return 0;
}
