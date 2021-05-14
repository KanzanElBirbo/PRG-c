#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void caesar_encrypt(velikost) {
char text[] = "BOUNCE";
    printf("puvodni text je: \t%s\n", text);
    for (int i = 0; i < strlen(text); i++) {
        text[i] += velikost; }
    printf("zasifrovany text je: \t%s\n", text);
    }

int main() {
    caesar_encrypt(4);

return 0; }

