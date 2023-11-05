#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Ingrese el numero: ");
    scanf_s("%i", &a);
    printf("Ingrese el numero: ");
    scanf_s("%i", &b);
    printf("Ingrese el numero: ");
    scanf_s("%i", &c);

    if (a > b && a > c)
    {
        printf("%i es el numero mayor", a);
    }
    else
    {
        if (b > a && b > c)
        {
            printf("%i es el numero mayor", b);
        }
        else
        {
            if (c > a && c > b)
            {
                printf("%i es el numero mayor", c);
            }
        }
    }

    return 0;
}
