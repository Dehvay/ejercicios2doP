#include <stdio.h>

int main()
{
    int Uent, i;

    printf("Indique un numero entero: ");
    scanf_s("%i", &Uent);

    for (i = 1; i <= Uent; i++)
    {
        if (!(i % 2 == 0))
        {
            printf("%i,", i);
        }
    }

    return 0;
}
