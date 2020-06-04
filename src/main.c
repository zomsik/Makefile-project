#include <stdio.h>
#include <stdlib.h>
#include "../my_inc/kwadrat.h"
#include "../my_inc/szescian.h"

int main()
{
    float a;
    printf("Podaj dlugosc boku a: ");
    if ( scanf("%f",&a) == 1)
    {
        printf("Pole kwadratu wynosi %.2f \n", kwadrat(a));
        printf("Objetosc szescianu wynosi %.2f \n", szescian(a));
    }
    else
    {
        printf("Blad odczytu dlugosci boku. \n");    
    }
    return 0;
}

