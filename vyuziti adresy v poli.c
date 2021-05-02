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
for(i=0; i<pocet; i++) {
    printf("pole[%d] = %d\n", i, pole[i]);
}
return 0; }
