#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int tmp;
    printf("%i-%i-%i\n", a, b, c);
    tmp = a;
    a = c;
    c = b;
    b = tmp;
    printf("%i-%i-%i\n", a, b, c);

    return 0; }
