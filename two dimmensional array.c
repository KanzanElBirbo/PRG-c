#include <stdio.h>
#include <stdlib.h>

int main() {

int a[2][3] = { {3, 2, 6}, {4, 5, 20}};

printf("Element 3 in a row 1 is %d\n", a[1][0]);
a[1][2] = 25;
printf("Element 3 in a row 2 is %d\n", a[1][2]);

return 0; }
