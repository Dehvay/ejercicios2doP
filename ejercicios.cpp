#include <stdio.h>

int main()
{
    int edad, mes;
    float imp, imp2, desc;

    printf("Edad del contribuyente: ");
    scanf_s("%i", &edad);
    printf("Monto del impuesto: ");
    scanf_s("%f", &imp);
    printf("Mes de pago: ");
    scanf_s("%i", &mes);

    if (edad > 60)
    {
        desc = 0.25;

        if (mes == 1)
        {
            desc += 0.20;
            printf("Impuesto: %.2f\n", imp);
            desc = imp * desc;
            printf("Descuento: %.2f\n", desc);
            imp2 = imp - desc;
            printf("Impuesto a pagar %.2f\n", imp2);
        }
        else
        {
            if (mes == 2)
            {
                desc += 0.10;
                printf("Impuesto: %.2f\n", imp);
                desc = imp * desc;
                printf("Descuento: %.2f\n", desc);
                imp2 = imp - desc;
                printf("Impuesto a pagar %.2f\n", imp2);
            }
        }
    }
    else
    {
        if (mes == 1)
        {
            desc = 0;
            desc += 0.20;
            printf("Impuesto: %.2f\n", imp);
            desc = imp * desc;
            printf("Descuento: %.2f\n", desc);
            imp2 = imp - desc;
            printf("Impuesto a pagar %.2f\n", imp2);
        }
        else
        {
            if (mes == 2)
            {
                desc = 0;
                desc += 0.10;
                printf("Impuesto: %.2f\n", imp);
                desc = imp * desc;
                printf("Descuento: %.2f\n", desc);
                imp2 = imp - desc;
                printf("Impuesto a pagar %.2f\n", imp2);
            }
        }
    }

    return 0;
}
