#include <stdio.h>

int main()
{
    char Upalabra[20];

    printf("Ingrese una palabra: ");
    scanf_s("%s", Upalabra, 20);

    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", Upalabra);
    }

    return 0;
}
