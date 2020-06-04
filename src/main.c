#include <stdio.h>
#include <stdlib.h>
#include "kwadrat.h"
#include "szescian.h"

int main()
{
    float a;
    printf("Podaj dlugosc boku a: ");
    scanf("%f",&a);
    printf("Pole kwadratu wynosi %f \n", kwadrat(a));
    printf("Objetosc szescianu wynosi %f", szescian(a));
    return 0;
}

