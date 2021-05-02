#include <stdlib.h>
#include <stdio.h>

int main() {
int pocet;
printf("pocet prvku: ");
scanf("%d", &pocet);
int pole[pocet];
int i;
for(i=0; i<pocet; i++) {
    printf("vloz prvek c. %d: ", i+1);
    scanf("%d", &pole[i]);
}

int max = pole[0];
for(i=1; i<pocet; i++) {
    if(pole[i]>max) {
        max = pole[i];
    }
}
printf("nejvetsi prvek: %d\n", max);

return 0; }
