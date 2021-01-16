#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
double inch;
double cm = 2.54;
double inch2cm;

printf("Zadej hodnotu v inch, kterou chces prevest do cm \n");
scanf("%lf", &inch);
inch2cm = cm * inch;

printf("%.2lf inch je %.2lf cm", inch, inch2cm);
return 0; }
