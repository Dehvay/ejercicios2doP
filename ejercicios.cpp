#include <stdio.h>

int main()
{
    int edadA;

    printf("Cual es tu edad actual?: ");
    scanf_s("%i", &edadA);

    for (int i = 1; i <= edadA; i++)
    {
        printf("%i\n", i);
    }

    printf("Estos son los años que has cumplido");

    return 0;
}
