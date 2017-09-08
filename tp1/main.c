#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int flag_A =0;
int flag_B =0;

int main()
{
    char seguir='s';
    int opcion=0,x,y,resultado=0;

    do
    {
        if(flag_A==0)
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }
        if(flag_A==1)
        {
            printf("1- Ingresar 1er operando (A=%i)\n", x);
        }

        if(flag_B==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        if(flag_B==1)
        {
            printf("2- Ingresar 2do operando (B=%i)\n", y);
        }

        lista();

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("1- Ingrese 1er operando (B=y)\n");
            scanf("%i", &x);
            flag_A=1;
            limpiarLista();
            break;
        case 2:
            printf("2- Ingrese 2do operando (B=y)\n");
            scanf("%i", &y);
            flag_B=1;
            limpiarLista();
            break;
        case 3:
            if((flag_A=1) && (flag_B==1))
            {
                printf(" %i + %i = %i\n",x, y, suma(x,y));
                limpiarLista();
            }
            else
            {
                error();
                limpiarLista();
            }
            break;
        case 4:
            if((flag_A=1) && (flag_B==1))
            {
                printf(" %i - %i = %i\n",x, y, resta(x,y));
                limpiarLista();
            }
            else
            {
                error();
                limpiarLista();
            }
            break;
        case 5:
            if((flag_A=1) && (flag_B==1))
            {
                if(y==0)
                {
                    printf("no se puede dividir por cero, ingrese otro valor:" );
                    scanf("%i", &y);
                    flag_B=1;
                    limpiarLista();
                }
                else
                {
                    printf(" %i / %i = %.2f\n",x, y, division(x,y));
                    limpiarLista();
                }
            }
            else
            {
                error();
                limpiarLista();
            }
            break;
        case 6:
            if((flag_A=1) && (flag_B==1))
            {
                printf(" %i * %i = %i\n",x, y, multiplicacion(x,y));
                limpiarLista();
            }
            else
            {
                error();
                limpiarLista();
            }
            break;
        case 7:
            if((flag_A=1) && (flag_B==1))
            {
                if(x<0)
                {
                    printf("no se puede calcular un numero negativo, ingrese valor mayor a cero:" );
                    scanf("%i", &x);
                    flag_A=1;
                    limpiarLista();
                }
                if(y<0)
                {
                    printf("no se puede calcular un numero negativo, ingrese valor mayor a cero:" );
                    scanf("%i", &y);
                    flag_A=1;
                    limpiarLista();
                }
                printf(" El factorial de %i es =  %llu\n",x, factorialX(x));
                printf(" El factorial de %i es =  %llu\n",y, factorialY(y));
                limpiarLista();
            }
            else
            {
                error();
                limpiarLista();
            }
            break;
        case 8:
            if((flag_A=1) && (flag_B==1))
            {

                printf(" %i + %i = %i\n",x, y, suma(x,y));
                printf(" %i - %i = %i\n",x, y, resta(x,y));
                printf(" %i * %i = %i\n",x, y, multiplicacion(x,y));

                if(x<0)
                {
                    printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el primer operando:" );
                    scanf("%i", &x);
                    flag_A=1;
                    limpiarLista();
                }
                if(y<0)
                {
                    printf("no se puede calcular el factorial de un numero negativo, ingresar valor mayor a cero para el segundo operando:" );
                    scanf("%i", &y);
                    flag_A=1;
                    limpiarLista();
                }
                printf(" El factorial de %i es =  %llu\n",x, factorialX(x));
                printf(" El factorial de %i es =  %llu\n",y, factorialY(y));

                if(y==0)
                {
                    printf("no se puede dividir por cero, ingresar otro valor para el segundo operando:" );
                    scanf("%i", &y);
                    printf(" %i / %i = %.2f\n",x, y, division(x,y));
                    limpiarLista();
                }
                else
                {
                    printf(" %i / %i = %.2f\n",x, y, division(x,y));
                    limpiarLista();
                }

                limpiarLista();

            }
            else
            {
                error();
                limpiarLista();
            }
            break;

        case 9:
            seguir = 'n';
            break;

        default:
            printf("\n Introducir una opcion valida... \n");
            scanf("%d",&opcion);
            limpiarLista();
        }
    }
    while(seguir=='s');

    return 0;
}
