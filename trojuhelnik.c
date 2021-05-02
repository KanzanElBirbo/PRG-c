#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void triangle(int velikost)
{
int r;
int c;
int space;
int count = 1;

for(r = 1; r <= velikost; r++) {
    for(space = 1; space <= (velikost-r); space++) {
        printf(" ");
    }
    for(c = 1; c <= r; c++) {
        printf(" %d ", count++);
    }
    printf("\n");
    }
 }

int main() {
triangle(10);

return 0; }
