#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pole_des_cisel[10];

    printf("Generuji cisla do pole...\n");
    generate_items(&pole_des_cisel);
    printf("Cisla vygenerovana\n");
    printf("Cisla v poli:\n");
    show_items(&pole_des_cisel);
    printf("\nZaokrouhluji cisla...\n");
    round_items(&pole_des_cisel);
    printf("Cisla zaokrouhlena\n");
    printf("Cisla v poli:\n");
    show_items(&pole_des_cisel);
}
void show_items(float* pole_cisel)
{
    for(int i=1; i<10+1; i++)
    {
        printf("%.3f ", pole_cisel[i]);
    }
}
void generate_items(float* pole_cisel)
{
    for(int i=1; i<10+1; i++)
    {
        pole_cisel[i] = (rand()%15)+(rand()%99)/(float)99;
    }
}
void round_items(float* pole_cisel)
{
    for(int i=1; i<10+1; i++)
    {
        pole_cisel[i] = roundf(pole_cisel[i]*10)/10; //Kratime a delime 10, aby se to zaokrouhlilo na desetiny. Pokud bychom napsali 100, tak to zaokrouhli na setiny.
    }
}
