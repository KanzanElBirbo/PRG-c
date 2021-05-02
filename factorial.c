#include <stdio.h>
#include <stdlib.h>

int factorial(int l);

int main() {
int x = 5;

printf("The factorial of %d is %d\n", x, factorial(x));
return 0; }

int factorial(int l) {
if (l == 1)
    return (1);
    else
        return(l * factorial(l - 1));
}
